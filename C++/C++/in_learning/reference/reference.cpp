#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;

void Increment(int& value)
{
	value++;
}

int main()
{
	//int var = 8;
	//Increment(var);
	/*int& ref = var;
	ref = 2	*/
	//int& value = var;
	
	int a{5};
	int b{2};

	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;

	LOG(a);
	LOG(b);
}

