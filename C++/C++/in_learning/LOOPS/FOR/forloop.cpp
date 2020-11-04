#include <iostream>

void Log(const char* message)
{
	std::cout<<message<<std::endl;
}

int main()
{
	/*
	 * OPTION ONE
	 * for (int i=0; i<5; i++)
		std::cout<<"Hello"<<std::endl;
	
	std::cin.get();

	* OPTION TWO
	int i = 0;
	for ( ;i<5; i++)
		std::cout<<"Hello"<<std::endl;
	
	std::cin.get();*/

	//OPTION THREE
	int i = 0;
	bool condition = true;
	for ( ;condition; )
	{
		Log("hello");
		i++;

		if (!(i<5))
		{
			condition = false;
		}
	}
		
	std::cin.get();
}
