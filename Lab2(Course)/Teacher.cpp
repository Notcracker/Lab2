#include "Teacher.h"
#include <iostream>

using namespace std;

void Teacher::GradeStudent()
{
	cout << "Student graded." << endl;
};

void Teacher::SitInClass()
{
	cout << "Sitting at front of class" << endl;
}

string Teacher::getFirstname() {
	return this->firstname;
};
string Teacher::getLastname() {
	return this->lastname;
};
int Teacher::getAge() {
	return this->age;
};
string Teacher::getAddress() {
	return this->address;
};
string Teacher::getCity() {
	return this->city;
};
string Teacher::getPhone() {
	return this->phone;
};