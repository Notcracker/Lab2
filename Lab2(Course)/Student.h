#pragma once
#include <iostream>

using namespace std;

class Student
{
public:
	Student();
	~Student();

	void SitInClass();

	string getFirstname();
	string getLastname();
	int getAge();
	string getAddress();
	string getCity();
	string getPhone();

private:

	string firstname;
	string lastname;
	int age;
	string address;
	string city;
	string phone;
};

Student::Student()
{
}

Student::~Student()
{
}