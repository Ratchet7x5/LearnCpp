#include <iostream>
#include <string>

enum cow_purpose
{
	dairy, meat, hide, pet
};

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

int main()
{
	//the cow struct 
	cow my_cow("Hilda", 7, 'P');

	std::cout << "The cow's name is \"" << my_cow.get_name() << "\" and its " << my_cow.get_age() << " years old.\n";
	std::cout << my_cow.get_name() << "'s purpose is type-" << (int)my_cow.get_purpose() << std::endl; //int-cast to see "type-X"

	return 0;
}