#include "Student.h"
#include <iostream>

using namespace std;

void Student::SitInClass()
{
	cout << "Sitting in main theater" << endl;
}
string Student::getFirstname() {
	return this->firstname;
};
string Student::getLastname() {
	return this->lastname;
};
int Student::getAge() {
	return this->age;
};
string Student::getAddress() {
	return this->address;
};
string Student::getCity() {
	return this->city;
};
string Student::getPhone() {
	return this->phone;
};