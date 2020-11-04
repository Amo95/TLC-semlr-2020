#include <iostream>

void Log(const char* message)
{
	std::cout<<message<<std::endl;
}

int main()
{
	int value1 {5};
	
	bool comparisonResult = value1 == 5;
	if (comparisonResult)
	{
		Log("hello");
	}

	std::cin.get();
}
