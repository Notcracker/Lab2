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
	cout << this->firstname;
};
string Teacher::getLastname() {
	cout << this->lastname;
};
int Teacher::getAge() {
	cout << this->age;
};
string Teacher::getAddress() {
	cout << this->address;
};
string Teacher::getCity() {
	cout << this->city;
};
string Teacher::getPhone() {
	cout << this->phone;
};