#include "lion.h"

lion::lion(const string& place, const size_t& age, bool isAlone)
    :Animal(place,age),isAlone(isAlone)
{
	//this->age = age; // +++++
	//setAge(age);
	//setPlace(place);
	cout << "\t >>>>>>>>>>>>>>>>>>>>>>>>> Ctor lion #" << id << endl;
}

lion::~lion()
{
	cout << "\t >>>>>>>>>>>>>>>>>>>>>>>>> Ctor lion #" << id << endl;
	cout << "\t\t Age       :: " << getAge() << endl;
	cout << "\t\t Place     ::" << 
}

void lion::