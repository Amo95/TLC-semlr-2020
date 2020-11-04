#include <iostream>
#include <sys/stat.h>  //defines standard I/O library
#include <unistd.h>
#include <stdlib.h>	//defines several general purpose function
#include <sys/types.h>	//define system data types

//main entry point (with int parameters, pointer array(Arg[]) in character type)
int main( int argc, char* argv[] ) 
{
	struct stat sbuf; //
	if ( stat(argv[1], &sbuf) < 0) 
	{
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}
	
	std::cout << argv[1] << " owned by " << sbuf.st_uid << std::endl;
	if (S_ISREG(sbuf.st_mode))
	{
		std::cout << argv[1] << " is a regular file " << std::endl;
	}
	return 0;
}
