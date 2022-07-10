#pragma once

//include guard
#ifndef COW_H
#define COW_H
#endif // !COW_H

#include <string>

class cow
{
public:
	//constructor
	cow(std::string in_name, int in_age, unsigned char in_purpose);

	//getters
	int get_age();
	std::string get_name();
	unsigned char get_purpose();

	//setters
	void set_age(int new_age);
	void set_name(std::string new_name);
	void set_purpose(unsigned char new_purpose);

private: //getter setters req'd
	std::string name;
	int age;
	unsigned char purpose;
};