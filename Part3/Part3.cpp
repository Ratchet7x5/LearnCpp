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
	std::cout << "Hello World!\n";
}