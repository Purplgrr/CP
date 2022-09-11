#pragma once

#include <iostream>
#include <string>

using namespace std;


// класс - Избранное, хранится в бинарном дереве поиска, ключевое поле для поисковой задачи - status
class Favorites
{
	string reader; // никнейм читателя НА АНГЛИЙСКОМ ЯЗЫКЕ В ОДНО СЛОВО
	string name; // название Манги НА АНГЛИЙСКОМ ЯЗЫКЕ В ОДНО СЛОВО  !!!!!!!! является ключевым полем т.е есть и в этом классе и в классе Манга
	int status; // целое число от 0 до 100, отражает прогресс прочитанного в процентах (основное изменение, нужно для удобного построения дерева


public:
	// конструкторы
	Favorites(string reader_, string name_, int status_) : // инициализирующий, для чтения из файла
		reader{ reader_ }, name{ name_ }, status{ status_ } {}
	Favorites(int status_) :
		reader{ }, name{ }, status{ status_ } {}
	Favorites() : // по умолчанию
		reader{ }, name{ }, status{ } {}


	// перегрузка операторов сравнения для Бинарного дерева
	bool operator ==(const Favorites& other)
	{
		return status == other.status && reader == other.reader && name == other.name;
	}
	bool operator !=(const Favorites& other)
	{
		return status != other.status || reader != other.reader || name != other.name;
	}
	bool operator >=(const Favorites& other)
	{
		return status >= other.status;
	}
	bool operator <=(const Favorites& other)
	{
		return status <= other.status;
	}
	bool operator >(const Favorites& other)
	{
		return status > other.status;
	}
	bool operator < (const Favorites& other)
	{
		return status < other.status;
	}
	friend ostream& operator << (ostream& out, Favorites& object) // перегрузка оператора потока, для отладки
	{
		out << object.reader << "|" << object.name <<
			"|" << object.status << "%";
		return out;
	}

	operator int() const // приведение к целому числу для ключа Бинарного дерева
	{
		return status;
	}

	string get_name() { return name; }
	string get_reader() { return reader; }
	int get_status() { return status; }

	auto get_all_data_string() // для перевода в Системную строку и отображения в Форме // в консольном интерфейсе не используется
	{
		auto reader_str = gcnew System::String(reader.c_str());
		auto name_str = gcnew System::String(name.c_str());
		auto result = reader_str + "/" + name_str + "/"
			+ status.ToString() + "%";

		return result;
	}
};


// Класс Манга - хранится в статической хэш таблице, хэшируется по коду символов Названия(title)
class Manga
{
	string title;// название / в файле указывается на Английском языке В ОДНО СЛОВО
	string genre; // жанр /  / в файле указывается на Английском языке В ОДНО СЛОВО
	int age_restrictions; // ограничение по возрасту / в файле просто число, от 0 до какого - то разумного значения 

public:
	Manga(string title_, string genre_, int age) : // Инициализирующий конструктор для ввода из файла
		title{ title_ }, genre{ genre_ }, age_restrictions{ age } {}
	Manga() : // Конструктор по умолчанию, нужен для Хэш таблицы
		title{  }, genre{  }, age_restrictions{  } {}

	operator int() const // перегрузка приведения к целому число, ключ хэширования - сумма кодов символов Названия манги
	{
		int counter{ };
		for (auto i = 0; i < title.length(); ++i)
			counter += (int)title[i];
		return counter;
	}

	friend ostream& operator << (ostream& out, Manga& object) // перегрузка оператора вывода. Для консольной отладки
	{
		out << object.title << "|" << object.genre << "|" << object.age_restrictions;
		return out;
	}
	bool operator ==(const  Manga& other) // перегрузка операторов сравнения
	{
		return title == other.title && genre == other.genre
			&& age_restrictions == other.age_restrictions;
	}
	bool operator !=(const  Manga& other)
	{
		return title != other.title || genre != other.genre
			|| age_restrictions != other.age_restrictions;
	}
	// простые геттеры, возвращают значения конкретных полей для поисковой задачи
	string get_title()
	{
		return title;
	}
	string get_genre()
	{
		return genre;
	}
	int get_age()
	{
		return age_restrictions;
	}

	auto get_all_data_string() // для перевода в Системную строку и отображения в Форме // в консольном интерфейсе не используется
	{
		auto title_str = gcnew System::String(title.c_str());
		auto genre_str = gcnew System::String(genre.c_str());
		auto result = title_str + "|" + genre_str + "|"
			+ age_restrictions.ToString();

		return result;
	}
};


