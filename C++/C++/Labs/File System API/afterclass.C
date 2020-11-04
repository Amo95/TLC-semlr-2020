#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string>
#define LOG(x)

int main(int argc, char** argv)
{
	struct stat buf;
	stat("./file", &buf);
	if(S_ISREG(buf.st_mod))
		cout
