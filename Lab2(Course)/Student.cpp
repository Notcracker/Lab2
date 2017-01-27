#include "Student.h"
#include <iostream>

using namespace std;

void Student::SitInClass()
{
	std:cout << "Sitting in main theater" << endl;
}
string Student::getFirstname() {
	cout << this->firstname;
};
string Student::getLastname() {
	cout << this->lastname;
};
int Student::getAge() {
	cout << this->age;
};
string Student::getAddress() {
	cout << this->address;
};
string Student::getCity() {
	cout << this->city;
};
string Student::getPhone() {
	cout << this->phone;
};