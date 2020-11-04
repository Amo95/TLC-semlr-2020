#include <iostream>
#include <log.h>

int main()
{
	int a {8};
	const char* string {"Hello"};
	a++;

	for (int i=0;i<5;i++)
	{
		const char c = string[i];
		std::cout<<c<<std::endl;
	}
	Log("Say hello");
	std::cin.get();
}
