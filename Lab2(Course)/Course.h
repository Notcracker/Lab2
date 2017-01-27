#pragma once
#include "Student.h"
#include "Teacher.h"

class Course
{
public:
	Course();
	~Course();

private:
	Student *students[3];
	Teacher *teacher;
};

Course::Course()
{
}

Course::~Course()
{
}