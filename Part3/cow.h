#pragma once

//include guard
#ifndef COW_H
#define COW_H
#endif // !COW_H

#include <string>

class cow
{
public:
	cow(std::string in_name, int in_age, unsigned char in_purpose) {
		name = in_name;
		age = in_age;
		purpose = in_purpose;
	};

	int get_age() {
		return age;
	};

	std::string get_name() {
		return name;
	};

	unsigned char get_purpose() {
		return purpose;
	};

	//setters
	void set_age(int new_age) {
		age = new_age;
	};

	void set_name(std::string new_name) {
		name = new_name;
	};

	void set_purpose(unsigned char new_purpose) {
		purpose = new_purpose;
	};
private: //getter setters req'd
	std::string name;
	int age;
	unsigned char purpose;
};