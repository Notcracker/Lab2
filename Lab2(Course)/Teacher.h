#pragma once
#include <iostream>

using namespace std;

class Teacher
{
public:
	Teacher();
	~Teacher();

	void GradeStudent();
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

Teacher::Teacher()
{
}

Teacher::~Teacher()
{
}
