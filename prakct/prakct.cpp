#include <iostream>
#include "Student.h"
#include "Aspirant.h"

using namespace std;

int main() 
{

    Student student("Гавлішина Соломія", 18, "Медична Академія ", "Фармацевт");
    student.displayInfo();

    cout << endl;

    Aspirant aspirant("Світлана Євгенівна", 65, "Медична Академія ", "Біологія ", "фАРМАЦІЯ");
    aspirant.displayInfo();

}