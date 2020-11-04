#include <iostream>

int Multiple(int a, int b)
{
	return a * b;
}

void MultiAndLog(int a, int b)
{
	int result {Multiple(a,b)};
	std::cout<<result<<std::endl;
}


int main()
{
	MultiAndLog(5,6);
	MultiAndLog(45,6);
	MultiAndLog(5,7);
	std::cin.get();
}
