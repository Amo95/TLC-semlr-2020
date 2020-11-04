#include <iostream>
#define LOG(i) std::cout<<i<<std::endl

int main()
{
	char name[] {"Hello"};
	char* p {name};
	
	LOG(*(name+2));
}
