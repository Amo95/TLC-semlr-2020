#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;

int main()
{
	char array[] {"James"};
	char* ptr {array};
	
	//LOG(((&array[2])==(ptr+2)));
	
	if (&array[2]==ptr+2)
	{
		LOG("This is ok");
	}
	else
	{
		LOG("This is weird");
	}

	LOG((array==&array[0]));
	LOG(array);
	std::cin.get();
}
	
