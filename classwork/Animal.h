#pragma once
#include "lib.h"

class Animal
{
public:
	void setAge(const size_t& age);
	void setPlace(const string& place);

	void print() const;
	Animal(const string& plase = "No place", const size_t& age = 0);
private:
	size_t age;
	static size_t last_id;
protected:
	string plase;
	size_t id;
};