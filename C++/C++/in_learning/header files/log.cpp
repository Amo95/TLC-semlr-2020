#include <iostream>
#include "log.h"

void InitLog()
{
	Log("Initializing log");
}

void Log(const char* message)
{
	std::cout<<message<<std::endl;
}

