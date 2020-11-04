#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	mkdir("one", 0777); //system call from stat.h
	chdir("one");
	mkdir("two", 0777);
}
