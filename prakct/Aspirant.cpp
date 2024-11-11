#include "Aspirant.h"
#include <iostream>

using namespace std;

Aspirant::Aspirant(string name, int age, string university, string faculty, string thesisTopic)
    : Student(name, age, university, faculty), thesisTopic(thesisTopic) {}

void Aspirant::displayInfo() const
{

    Student::displayInfo();
    cout << "Тема дисертації: " << thesisTopic << endl;
}

Aspirant::~Aspirant() {}

