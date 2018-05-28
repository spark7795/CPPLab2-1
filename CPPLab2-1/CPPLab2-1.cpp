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
	//����������� � �����������
	TestClass(string firstname, string lastname, int date_day, int date_month, int date_year){
		cout << "����������� � �����������\n";
		fname = firstname;
		lname = lastname;
		day = date_day; // ������������� ����
		month = date_month; // ������������� �����
		year = date_year; // ������������� ���
	}
	// ����������� ��� ����������
	TestClass() {
		cout << "����������� ��� ����������\n";
		int empty = 10;
		cout << empty << endl;
	}
	// ����������� �����������
	TestClass(TestClass& obj)
	{
		cout << "\n����������� �����������\n";
		fname = obj.fname;
		lname = obj.lname;
		day = obj.day;
		month = obj.month;
		year = obj.year;
	}
	// ����������
	~TestClass() {
		cout << "����� �����������";
	}
	void showName() // ����� ���
	{
		cout << "Your name: " << fname + lname << "\n";
	}
	void showDate() // ����� ���
	{
		
		cout << "Date: " << day << "." << month << "." << year << endl;
	}

}; 

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int day, month, year;
	string fname, lname;
	cout << "������� ���� ������!\n";
	cout << "���: ";	getline(cin, fname);
	cout << "�������: ";	getline(cin, lname);
	cout << "����: ";     cin >> day;
	cout << "�����: ";    cin >> month;
	cout << "���: ";  cin >> year;
	cout << endl;
	TestClass EmptryConstr;
	TestClass PersonalInfo(fname, lname, day, month, year); // ���������� �������
	PersonalInfo.showName(); // ����� ������ �����
	PersonalInfo.showDate(); // ����� ������ ����
	TestClass PersonalBackup = PersonalInfo; // ������������� �����������
	cout << "\n\nCopy of Personal info~~~~~~~~~~~~~~~\n\n";
	PersonalBackup.showName(); cout << endl;
	system("pause");
	return 0;
}