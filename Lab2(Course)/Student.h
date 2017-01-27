#pragma once
#include <iostream>

using namespace std;

class Student
{
public:
	Student();
	~Student();

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