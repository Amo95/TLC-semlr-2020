#include <iostream>

void Log(const char* msg)
{
	std::cout<<msg<<std::endl;
}

int main()
{
	for (int i=0; i<5; i++)
	{
		if (i%2)
		{
			break;
		}
		Log("Break");
	}
	std::cin.get();
}
