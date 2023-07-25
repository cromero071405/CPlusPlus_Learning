#include <iostream>

int main() {
	// A variable allows us to name a piece of data we store in memory so we keep using it.
	
	// Variables occupy memory.

	// The only distinction between all variable types in C++ is the size. How much memory does the variable occupy?

	int variable = 8; // Integer size is four bytes.

	std::cout << variable << std::endl;

	variable = 20;

	std::cout << variable << std::endl;

	unsigned int variable_2 = -1;

	// unsigned defines an integer that doesn't have a sign bit.

	char character; // Char size is one byte.

	short question; // Short size is two bytes.

	long question_2; // Long size is four bytes.

	long long question_3; // Long Long size is eight bytes.

	// The only real difference between the data types is how much memory is allocated for the variable.

	float variable_decimal = 5.5f; // Float size is four bytes.

	double var = 5.2; // Double size is eight bytes.

	bool yes; // Bool size is one byte.

	// sizeof(type) returns the byte size of variable type



}