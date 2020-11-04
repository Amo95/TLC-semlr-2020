#include <iostream>

void Log(const char* msg)
{
	std::cout<<msg<<std::endl;
}

int main()
{
	for (int i=0; i<5; i++)
	{
		if ((i+1)%2)
		{
			return 0;
		}

		Log("return");
	}
	 std::cin.get();
}
