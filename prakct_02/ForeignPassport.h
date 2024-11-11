#pragma once
#include "Passport.h"

class ForeignPassport : public Passport 
{
private:
    string foreignPassportNumber; 
    string visaDetails;           

public:
    ForeignPassport(string fn, string ln, string bd, string pNum, string iDate, string eDate,
        string fPNum, string visa);

    void printInfo() const override;
};
