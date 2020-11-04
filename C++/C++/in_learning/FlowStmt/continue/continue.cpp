#include <iostream>

void Log(const char* message)
{
	std::cout<<message<<std::endl;
}

int main()
{
	for (int i = 0; i<5; i++)
	{

		if (i%2==0)
		{
			continue;
		}
		Log("hello");
	}
	
	std::cin.get();
}
