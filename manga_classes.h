#pragma once

#include <iostream>
#include <string>

using namespace std;


// ����� - ���������, �������� � �������� ������ ������, �������� ���� ��� ��������� ������ - status
class Favorites
{
	string reader; // ������� �������� �� ���������� ����� � ���� �����
	string name; // �������� ����� �� ���������� ����� � ���� �����  !!!!!!!! �������� �������� ����� �.� ���� � � ���� ������ � � ������ �����
	int status; // ����� ����� �� 0 �� 100, �������� �������� ������������ � ��������� (�������� ���������, ����� ��� �������� ���������� ������


public:
	// ������������
	Favorites(string reader_, string name_, int status_) : // ����������������, ��� ������ �� �����
		reader{ reader_ }, name{ name_ }, status{ status_ } {}
	Favorites(int status_) :
		reader{ }, name{ }, status{ status_ } {}
	Favorites() : // �� ���������
		reader{ }, name{ }, status{ } {}


	// ���������� ���������� ��������� ��� ��������� ������
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
	friend ostream& operator << (ostream& out, Favorites& object) // ���������� ��������� ������, ��� �������
	{
		out << object.reader << "|" << object.name <<
			"|" << object.status << "%";
		return out;
	}

	operator int() const // ���������� � ������ ����� ��� ����� ��������� ������
	{
		return status;
	}

	string get_name() { return name; }
	string get_reader() { return reader; }
	int get_status() { return status; }

	auto get_all_data_string() // ��� �������� � ��������� ������ � ����������� � ����� // � ���������� ���������� �� ������������
	{
		auto reader_str = gcnew System::String(reader.c_str());
		auto name_str = gcnew System::String(name.c_str());
		auto result = reader_str + "/" + name_str + "/"
			+ status.ToString() + "%";

		return result;
	}
};


// ����� ����� - �������� � ����������� ��� �������, ���������� �� ���� �������� ��������(title)
class Manga
{
	string title;// �������� / � ����� ����������� �� ���������� ����� � ���� �����
	string genre; // ���� /  / � ����� ����������� �� ���������� ����� � ���� �����
	int age_restrictions; // ����������� �� �������� / � ����� ������ �����, �� 0 �� ������ - �� ��������� �������� 

public:
	Manga(string title_, string genre_, int age) : // ���������������� ����������� ��� ����� �� �����
		title{ title_ }, genre{ genre_ }, age_restrictions{ age } {}
	Manga() : // ����������� �� ���������, ����� ��� ��� �������
		title{  }, genre{  }, age_restrictions{  } {}

	operator int() const // ���������� ���������� � ������ �����, ���� ����������� - ����� ����� �������� �������� �����
	{
		int counter{ };
		for (auto i = 0; i < title.length(); ++i)
			counter += (int)title[i];
		return counter;
	}

	friend ostream& operator << (ostream& out, Manga& object) // ���������� ��������� ������. ��� ���������� �������
	{
		out << object.title << "|" << object.genre << "|" << object.age_restrictions;
		return out;
	}
	bool operator ==(const  Manga& other) // ���������� ���������� ���������
	{
		return title == other.title && genre == other.genre
			&& age_restrictions == other.age_restrictions;
	}
	bool operator !=(const  Manga& other)
	{
		return title != other.title || genre != other.genre
			|| age_restrictions != other.age_restrictions;
	}
	// ������� �������, ���������� �������� ���������� ����� ��� ��������� ������
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

	auto get_all_data_string() // ��� �������� � ��������� ������ � ����������� � ����� // � ���������� ���������� �� ������������
	{
		auto title_str = gcnew System::String(title.c_str());
		auto genre_str = gcnew System::String(genre.c_str());
		auto result = title_str + "|" + genre_str + "|"
			+ age_restrictions.ToString();

		return result;
	}
};


