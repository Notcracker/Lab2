#pragma once
#include <iostream>

using namespace std;

class Teacher
{
public:
	Teacher();
	~Teacher();

private:
	string firstname;
	string lastname;
	int age;
	string address;
	string city;
	string phone;
};

Teacher::Teacher()
{
}

Teacher::~Teacher()
{
}