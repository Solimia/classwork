#pragma once
#include "Student.h"
#include <string>
using namespace std;

class Aspirant : public Student
{
private:
    string thesisTopic;  

public:
    Aspirant(string name, int age, string university, string faculty, string thesisTopic);

    void displayInfo() const override;

    ~Aspirant();
};