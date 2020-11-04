#include <iostream>
#include <Log.h>
// anything cpp with # [pound sign] is a preprocessor statement.. so iostream file/header file is preprocessed [first run before compiling start] then copy into this code by the compiler

//declare extended function file
void Log(char* message);

//entry point - returns an integer value
int main() 
{

	//name is defined as type string
	char name[255];
	
	//prompt
	std::cout<<"Type name: "; 
	//operator is a function which returns value to console out(standard output[STDOUT one]

	std::cin.get(name,255);
	Log(name);
}
