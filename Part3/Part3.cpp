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
	cow hilda("Hilda", 7, 'P');
	cow betty("Betty", 10, 'h');

	cow* p_cow = &hilda;

	std::cout << "The cow's name is \"" << hilda.get_name() << "\" and its " << hilda.get_age() << " years old.\n";
	std::cout << hilda.get_name() << "'s purpose is type-" << (int)hilda.get_purpose() << std::endl; //int-cast to see "type-X"

	std::cout << "\nThe cow's name is \"" << betty.get_name() << "\" and its " << betty.get_age() << " years old.\n";
	std::cout << betty.get_name() << "'s purpose is type-" << (int)betty.get_purpose() << std::endl; //int-cast to see "type-X"

	std::cout << "\n-- POINTER STUFF --\n";
	std::cout << "The pointer's cow's name is \"" << p_cow->get_name() << "\" and its " << p_cow->get_age() << " years old.\n";
	std::cout << p_cow->get_name() << "'s purpose is type-" << (int)p_cow->get_purpose() << std::endl; //int-cast to see "type-X"

	//swap to betty now
	p_cow = &betty;

	std::cout << "\nThe pointer is looking at a different cow now...\n";
	std::cout << "\nThe pointer's cow's name is \"" << p_cow->get_name() << "\" and its " << p_cow->get_age() << " years old.\n";
	std::cout << p_cow->get_name() << "'s purpose is type-" << (int)p_cow->get_purpose() << std::endl; //int-cast to see "type-X"

	return 0;
}