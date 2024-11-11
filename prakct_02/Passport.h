#pragma once
#include <string>
using namespace std;

class Passport
{
protected:
    string firstName;      
    string lastName;       
    string birthDate;      
    string passportNumber; 
    string issueDate;      
    string expirationDate; 

public:
    Passport(string fn, string ln, string bd, string pNum, string iDate, string eDate);

    virtual void printInfo() const;
};
