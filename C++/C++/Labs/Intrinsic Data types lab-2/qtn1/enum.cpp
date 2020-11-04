#include <iostream>
#define LOG() std::cout<<"Enter number: ";
#define PRINT(x) std::cout<<x<<std::endl;

enum Color
{
	RED, YELLOW, AMBER=YELLOW, GREEN
};

int main()
{
	int num;
	LOG();
	std::cin>>num;

	if (num == RED)
	{
		PRINT("You chose Red");
	}
	else if (num == YELLOW)
	{
		PRINT("You chose Yellow");
	}
	else if (num == AMBER)
	{
		PRINT("You chose AMBER/YELLOW");
	}
	else if (num == GREEN)
	{
		PRINT("You chose GREEN");
	}
	else
		PRINT("NO COLOR FOUND");
	
	Color YELLOW = GREEN;
	PRINT(YELLOW);
	PRINT(AMBER);
	PRINT(GREEN);

	std::cin.get();
}
