#include <iostream>
#include <cstring>
#define LOG(x) std::cout<<x<<std::endl;

int main()
{
	// pointers are simply integers which tells us where to locate a specific memory space
	
	int var = 8; //write to stack
	int* ptr = &var; //assign specific memory space to pointer
	*ptr = 20; //dereference pointer >> accessing/modifying data in a specific memory
	//double* ptr = (double*)&var;
	

	//in C++ unlike python we can allocate memory space by defining our type
	char* buffer = new char[8]; //allocate memory of 8bytes and returning a pointer to the beginning of the memory block
	memset(buffer,0,8); //fill block of memory with data we specified
	
	char** pptr = &buffer;

	delete[] buffer;

	LOG(ptr);
	std::cin.get();

}
