#include "Animal.h"

size_t Animal::last_id = 0;
 
void setAge(const size_t& age);
{
	this->age = age 
}

void Animal::setPlace(const string& place)
{
	if (!place = place)
}

void Animal::print() const
{
	cout << "\t Animal id      ::#" << id << endl;
	cout << "\t Animal age      ::#" << age << endl;
	cout << "\t Animal place      ::#" << place << endl;
}

Animal::Animal(const string& place, const size_t& age)
{
	setAge(age);
	setPlace(place);
	id = ++last_id;

	cout << "\t >>>>>>>>>>>>>>>>>>>>>>>>> Ctor lion #" << id << endl;
}

Animal::Animal()
{
	cout << "\t >>>>>>>>>>>>>>>>>>>>>>>>> Dtor lion #" << id << endl;
}