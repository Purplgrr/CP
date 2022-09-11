#pragma once
#include "main_interface.h"
#include "hash_table_class.h"
#include "tree_class.h"
#include "init_mod.h"
#include "manga_classes.h"

class Interface // Паттерн фасад для усправления основными сущностями
{
	BTree<Favorites*>* favorites_data_base; // база данных Избранного, хранится в дереве
	SimpleHashTable<Manga*>* manga_data_base; // база данныхз Манги, хранится в хэш таблице
	int hash_table_size; // хэш таблица статическая - поэтому указывается размер таблицы
	bool inited; // просто проверяет инициализированы ли базы данных, понадобиться для графики

	bool is_it_prime(int n) {
		for (auto i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				return false;
		}
		return true;
	}

public:
	Interface() : favorites_data_base{ nullptr }, manga_data_base{ nullptr }, inited{ false } {} // простой конструктор
	~Interface() // деструктор
	{
		delete favorites_data_base;
		delete manga_data_base;
	}

	void Init_Data_Bases(int size) // инициализация основных баз данных
	{
		Init_Favorites_Data_Base favorites_base; // это объекты из файла Init from file
		Init_Manga_Data_Base manga_base;   // они просто вернут заполненные из файла базы данных
		hash_table_size = size;
		favorites_data_base = favorites_base.Init_Data_Base();  // здесь
		manga_data_base = manga_base.Init_Data_Base(hash_table_size); // и здесь
		inited = true;
	}

	bool is_bases_inited()
	{
		return inited;
	}

	/*vector<string> Init_Cleaning_for_Form()
	{
		ifstream file_for_input("Сleaning.txt");
		string tmp;
		vector<string> splitted_line;
		vector<string> result;


		while (getline(file_for_input, tmp))
		{
			result.push_back(tmp);
		}
		file_for_input.close();
		return result;
	}*/


	int get_string_code(string object) // функция переводит Строку к числовому представлению - считает сумму кодов символов
	{
		int counter{ };
		for (auto i = 0; i < object.length(); ++i)
			counter += (int)object[i];
		return counter;
	}


	auto main_search_task(int stat, int age) // решение осонвной поисковой задачи, принимает статус и ограничение по возрасту
	{ // пока в консольном виде
		//cout << "favourites data base: " << endl; //
		//favorites_data_base->draw_wrap(); // здесь просто выводится бинарное дерево, наклоненное на бок
		//cout << "manga data base:" << endl;
		//manga_data_base->table_print(); // выводится вся хэш таблица
		// здесь мы получаем узел, содержащий все объекты с интересующим нас статусом (см. файл с деревом)
		vector<Manga*> answer; // это вектор, в который будем помещать ответы
		BTree<Favorites*>::node* fav_with_good_status = favorites_data_base->search_wrap(new Favorites{ stat }); // (*)
		
			while (fav_with_good_status != NULL) // просто последовательно идем по цепочке, как по односвязному списку
			{ // получаем название Манги из очередного объекта Избранного, которые хранятся в том списке, который мы получили здесь (*)
				Manga* tmp = manga_data_base->search_index(get_string_code(fav_with_good_status->num->get_name())); // хэшируем по этому названию, смотрим есть ли такой объект в таблице
				if (tmp != NULL)  // если объект есть т.е. хэширование успешно
				{
					if (tmp->get_age() == age) // извлекаем поле возраста из объекта Манга и если оно совпадает с искомым
						answer.push_back(tmp); // записываем его в ответ
				}
				fav_with_good_status = fav_with_good_status->next; // движемся дальше по цепочке пока не пройдем ее всю
			}
			return answer;
	}

	void testSearch(string name)
	{
		name = name + " ";
		auto result = favorites_data_base->searchOrderTraversWrapper(name);
		for (auto item : *result) // распечатываем ответ в консоль
			cout << *item << endl;
	}

	auto get_all_tree_for_debug()
	{
		return favorites_data_base;
	}

	auto get_all_tree_for_drawning()
	{
		return favorites_data_base->draw_wrap_return();
	}

	auto get_all_hash_table()
	{
		return manga_data_base;
	}

	auto get_hash_table_size()
	{
		return hash_table_size;
	}

	int insert_element_to_manga_data_base(string title, string genre, int age)
	{
		Manga* tmp_struct = new Manga{ title, genre, age };
		int op_result = manga_data_base->add_element(tmp_struct);
		return op_result;
	}

	int delete_element_from_manga_data_base(string title, string genre, int age)
	{
		Manga* tmp_struct = new Manga{title, genre, age };
		int op_result = manga_data_base->delete_element(tmp_struct);
		return op_result;
	}

	vector<int>* insert_element_to_fav_data_base(string name, string reader, int stat)
	{
		Favorites* tmp_struct = new Favorites{ reader, name, stat };
		auto path = favorites_data_base->additem(tmp_struct);
		return path;
	}

	bool delete_element_to_fav_data_base(string name, string reader, int stat)
	{
		Favorites* tmp_struct = new Favorites{ reader, name, stat };
		auto process_result = favorites_data_base->delete_wrap(tmp_struct);
		return process_result;
	}

	auto find_all_elements_by_num(string name)
	{
		auto elements_found = favorites_data_base->searchOrderTraversWrapper(name);
		return elements_found;
	}
};