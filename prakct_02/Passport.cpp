#include "Passport.h"
#include <iostream>

using namespace std;

Passport::Passport(string fn, string ln, string bd, string pNum, string iDate, string eDate)
    : firstName(fn), lastName(ln), birthDate(bd), passportNumber(pNum), issueDate(iDate), expirationDate(eDate) {}

void Passport::printInfo() const
{
    cout << "Паспортні дані:\n";
    cout << "Ім'я: " << firstName << "\n";
    cout << "Призвище: " << lastName << "\n";
    cout << "Дата народження: " << birthDate << "\n";
    cout << "Номер паспорта: " << passportNumber << "\n";
    cout << "Дата видачі: " << issueDate << "\n";
    cout << "Термін дії: " << expirationDate << "\n";
}
