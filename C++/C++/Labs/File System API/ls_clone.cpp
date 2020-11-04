#include <sys/stat.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char** argv)
{
	DIR* dir;
	struct dirent* sbuf;
	char* path = argv[1];

	dir = opendir(path);
	if(dir != 0)
	{
		while((sbuf = readdir(dir)))
		{
			std::cout<< sbuf->d_name<<std::endl;
		}
		closedir(dir);
	}
}
