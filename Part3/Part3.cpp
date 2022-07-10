#include <iostream>
#include <string>

#include "cow.h"

enum cow_purpose
{
	dairy, meat, hide, pet
};

int main()
{
	//the cow struct 
	cow my_cow("Hilda", 7, 'P');

	std::cout << "The cow's name is \"" << my_cow.get_name() << "\" and its " << my_cow.get_age() << " years old.\n";
	std::cout << my_cow.get_name() << "'s purpose is type-" << (int)my_cow.get_purpose() << std::endl; //int-cast to see "type-X"

	return 0;
}