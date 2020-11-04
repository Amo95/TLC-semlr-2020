#include <iostream>

char* strcpy(char*, char*);

int main()
{
	char name[] {"C++"};
	char buffer[100];
	std::cout<<name<<*buffer<<std::endl<<std::endl;

	strcpy(name, buffer);
}

char* strcpy(char* name, char* buffer)
{
	while(*buffer++ = *name++);
	return 0;
}
