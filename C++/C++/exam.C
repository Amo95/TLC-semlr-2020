#include<iostream>

int f()
{
	   std::cout << "f called ";
	      return 1;
}

int g()
{
	   std::cout << "g called ";
	      return 0;
}

int main()
{
	   if( f() == 1 || g() == 0 )
		          std::cout << "hello ";
	      else
		             std::cout << "goodbye ";    
	         return 0;
}
