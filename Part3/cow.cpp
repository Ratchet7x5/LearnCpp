#include "cow.h"

cow::cow(std::string in_name, int in_age, unsigned char in_purpose)
{
	name = in_name;
	age = in_age;
	purpose = in_purpose;
}

int cow::get_age()
{
	return age;
}

std::string cow::get_name()
{
	return name;
}

unsigned char cow::get_purpose()
{
	return purpose;
}

void cow::set_age(int new_age)
{
	age = new_age;
}

void cow::set_name(std::string new_name)
{
	name = new_name;
}

void cow::set_purpose(unsigned char new_purpose)
{
	purpose = new_purpose;
}
