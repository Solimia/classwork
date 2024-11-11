#include <iostream>
#include "ForeignPassport.h"

using namespace std;

int main() 
{

    Passport passport("Іван", "Іванов", "01.01.1990", "AA1234567", "01.01.2020", "01.01.2030");

    passport.printInfo();

    cout << endl;

    ForeignPassport foreignPassport("Петро", "Петренко", "05.06.1985", "BB9876543", "01.02.2021", "01.02.2031",
        "X12345678", "Шенгенська віза до 2025");

    foreignPassport.printInfo();

}