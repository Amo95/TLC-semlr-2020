#include <iostream>

int main()
{
	//int variable {8}; //signed integer[positive and negative]bytes space for memory
	unsigned int variable {8};//unsigned integer[only positive]
	std::cout<<variable<<std::endl;
	variable = -90;
	std::cout<<variable<<std::endl;	
	
	//if the size of a datatype depends on the compiler, how do we actually know 
	//how big our data is? by using an operator called getsize(arg)
	
	std::cout<<sizeof(bool)<<std::endl;
	std::cin.get();
}
