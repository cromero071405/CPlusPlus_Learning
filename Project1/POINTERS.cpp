// Memory is an important area in programming because with no memory, there is literally nothing you can do.

// DEF. Pointer: Is an integer/number, which stores a memory address.

// Memory is a linear one-dimensional line.

// Having more control over our computer's memory is vital.

// A type does not change what a Pointer is, it is soley just a memory address.

// When a pointer is not valid, it is perfectly acceptable for it to be that way.

// Memory is in hexadecimal format.

// An integer is four bytes of data.

// Dereferencing: Writing to the data.

// Some people say a Pointer is a block of memory, but to counter that statement, how do we know how big the block is?

// Nothing in the pointer says how big it truly is.

// A char is one byte of data.

// Pointers themselves are just variables, such as variables are also stored in memory. That's why double pointers, triple pointers can occur.

// CODE NOTES:
// #include <iostream>
// #define LOG(x) std::cout << x << std::endl

// int main() {

	// Different Ways
	// void* ptr = 0;
	// ptr = NULL;
	// ptr = nullptr;

	// int var = 8;
	// int* ptr = &var; // Simply asking for the "var" variable's memory address.
	// *ptr = 10;
	// LOG(var);

	// Heap Alocated
	// char* buffer = new char[8];
	// memset(buffer, 0, 8); // Fills a block of memory with data that we specified.
	// delete[] buffer;
	// std::cin.get();
// }