#include <iostream>

enum cow_purpose
{
	dairy, meat, hide, pet
};

struct cow
{
	std::string name;
	int age;
	unsigned char purpose;
};

int main()
{
	//the cow struct 
	cow my_cow;

	//init the values
	my_cow.name = "Betty";
	my_cow.age = 10;
	my_cow.purpose = cow_purpose::dairy;

	std::cout << "The cow's name is \"" << my_cow.name << "\" and its " << my_cow.age << " years old.\n";
	std::cout << my_cow.name << "'s purpose is type-" << (int)my_cow.purpose; //int-cast to see "type-X"
}