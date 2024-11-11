#pragma once
#include <string>
using namespace std;

class Student 
{
private:
    string name;
    int age;
    string university;
    string faculty;

public:
    Student(string name, int age, string university, string faculty);

    virtual void displayInfo() const;

    virtual ~Student();
};
