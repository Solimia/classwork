#pragma once
#include "Animal.h"
class lion :
	public Animal
{
public:
	lion(const string& place = "Afrika", const size_t& age = 0, bool isAlone = false);
	~lion();
private:
	bool isAlone
};