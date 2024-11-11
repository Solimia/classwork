#include "ForeignPassport.h"
#include <iostream>

using namespace std;

ForeignPassport::ForeignPassport(string fn, string ln, string bd, string pNum, string iDate, string eDate,
    string fPNum, string visa)
    : Passport(fn, ln, bd, pNum, iDate, eDate), foreignPassportNumber(fPNum), visaDetails(visa) {}

void ForeignPassport::printInfo() const 
{
    Passport::printInfo();
    cout << "Номер закордонного паспорта: " << foreignPassportNumber << "\n";
    cout << "Деталі візи: " << visaDetails << "\n";
}