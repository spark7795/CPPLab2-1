#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TestClass 
{
private: 
	string fname, lname;
	int day, month,	year;
public: 
	//Конструктор с параметрами
	TestClass(string firstname, string lastname, int date_day, int date_month, int date_year){
		cout << "Конструктор с параметрами\n";
		fname = firstname;
		lname = lastname;
		day = date_day; // инициализация день
		month = date_month; // инициализация месяц
		year = date_year; // инициализация год
	}
	// Конструктор без параметров
	TestClass() {
		cout << "Конструктор без параметров\n";
		int empty = 10;
		cout << empty << endl;
	}
	// Конструктор копирования
	TestClass(TestClass& obj)
	{
		cout << "\nКонструктор копирования\n";
		fname = obj.fname;
		lname = obj.lname;
		day = obj.day;
		month = obj.month;
		year = obj.year;
	}
	// Деструктор
	~TestClass() {
		cout << "Вызов деструктора";
	}
	void showName() // метод два
	{
		cout << "Your name: " << fname + lname << "\n";
	}
	void showDate() // метод раз
	{
		
		cout << "Date: " << day << "." << month << "." << year << endl;
	}

}; 

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int day, month, year;
	string fname, lname;
	cout << "Введите Ваши данные!\n";
	cout << "Имя: ";	getline(cin, fname);
	cout << "Фамилия: ";	getline(cin, lname);
	cout << "день: ";     cin >> day;
	cout << "месяц: ";    cin >> month;
	cout << "год: ";  cin >> year;
	cout << endl;
	TestClass EmptryConstr;
	TestClass PersonalInfo(fname, lname, day, month, year); // объявление объекта
	PersonalInfo.showName(); // Метод вывода имени
	PersonalInfo.showDate(); // Метод вывода даты
	TestClass PersonalBackup = PersonalInfo; // инициализация констуктора
	cout << "\n\nCopy of Personal info~~~~~~~~~~~~~~~\n\n";
	PersonalBackup.showName(); cout << endl;
	system("pause");
	return 0;
}