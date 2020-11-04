#include <iostream>
#define LOG(x) std::cout<<x;


int Mean(int sum, int number)
{
	LOG(sum/number);
	return 0;
}

int Median()
{
	return 0;
}

int main()
{
	int sum, num;
	for (int i=0; i<5; i++)
	{
		LOG("Enter value: ");
		std::cin>>num;
		sum += num;
	}
	Mean(sum, 5);
	std::cin.get();
}
