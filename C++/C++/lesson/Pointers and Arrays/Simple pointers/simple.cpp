#include <iostream>
#define LOG(x,i) std::cout<<x<<" "<<i<<std::endl;

int main()
{
	int i {5}; //initializing an integer variable 
	int *p {&i}; //assiging the address of i to an integer pointer
	*p-10; //returns the value in the integer pointer and modify it by performing an arithmetic function on it
	LOG(*p,i); //pass the pointer and variable to the preprocessor directives

	int **j {&p};
	int ***k {&j};
	int ****r {&k};

}
