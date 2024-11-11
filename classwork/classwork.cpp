#include <iostream>
#include "lion.h"
using namespace std;
int main()
{

	Animal animal("South Africa", 3);
	animal.print();

	cout << "\n\n";
	lion lion("North Afrika", 4, false);
	lion.print();
	cout << "\n\n";
	lion.Animal::print();
	cout << "\n\n";
	Wolf wolf("Afrika", 5, 30);
	wolf.print();

	cout << "\n\n";
	Dog dog;
	dog.print();
	cout << "\n\n";

	Animal arr[4]{ animal,lion,wolf,dog };
	for (auto& i : arr)
	{
		i.print();
		cout << endl;
	}
	cout << "\n\n";
}
