#include <iostream>
#define LOG(i,num,result) std::cout<<num<<"x"<<i<<"="<<result<<std::endl;
#define PRINT(x) std::cout<<x<<std::endl;

int Multiples(int index, int value, int result)
{
	if (value%2==0)
	{
		LOG(index,value,result);
	}
	return 0;
}

int NotDivisible(int value, int result)
{
	if (result%value != 2)
	{
		PRINT(result);
	}	
			
	return 1;
}

int main()
{
	while (true)
	{
		int number, result;
		std::cout<<"Enter value: ";
		std::cin>>number;

		if (number%2)
		{
			for (int i=0; i<=30; )
			{	
				++i;
				result = i * number;
				NotDivisible(number, result);
			}
		}
			

		else
		{
			for(int i=0; i<20; )
			{	
				++i;
				result = i * number;
				Multiples(i, number, result);
			}
		}
		std::cin.get();
	}
}
