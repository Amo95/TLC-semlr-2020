#include <iostream>
#include <math.h>

inline void Log(const char* message)
{
	std::cout<<message<<std::endl;
}

static int Multiply(int a,int b)
{
	Log("Multiply");
	return a * b;
}

int main()
{	
	int a, b;
	std::cout<<"Enter value: "<<std::endl;
	std::cin>>a>>b;

	std::cout<<Multiply(a, b)<<std::endl;
}
