#include <iostream>

void Log(const char* message)
{
	std::cout<<message<<std::endl;
}

int main()
{
	int i = 0;
	while (i<5)
	{
		Log("hello");
		i++;
	}
	 std::cin.get();

}
