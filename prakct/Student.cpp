#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, int age, string university, string faculty)
    : name(name), age(age), university(university), faculty(faculty) {}


void Student::displayInfo() const
{
    cout << "Student: " << name << ", " << age << " age, "
        << "Університет: " << university << ", "
        << "Факультет: " << faculty << endl;
}


Student::~Student() {}