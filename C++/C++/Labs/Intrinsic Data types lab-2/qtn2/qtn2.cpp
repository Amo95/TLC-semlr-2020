#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;

int main()
{	
	//integer
	int number{5};
	
	//pointer to integer
	int* ptr = &(++number);
	LOG(*ptr);

	//reference to integer
	int& refer = ++( *ptr);
	LOG(refer);
	
	//conversion

	set hexvalue {0xf3f2};
	LOG(hexvalue);

	std::cin.get();
	
}
