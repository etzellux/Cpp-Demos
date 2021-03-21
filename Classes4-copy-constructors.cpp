#include <cstdlib>
#include <iostream>

/* COPY CONSTRUCTOR */
/* 
classname (const classname &r) 
{
   // body of constructor
}
*/

class MyClass
{
	public:
		MyClass()
		{
			std::cout << "normal constuctor" << std::endl;
			std::cout << "this:" << this << std::endl;
			std::cout << "***************" << std::endl;
			
		}
		MyClass(const MyClass &r)
		{
			std::cout << "copy constructor" << std::endl;
			std::cout << "this:" << this << std::endl;
			std::cout << "reference:" << &r << std::endl;
			std::cout << "***************" << std::endl;	
		}
};

void display(MyClass m)
{
	std::cout << &m << std::endl;
}

int main()
{
	MyClass class1;
	MyClass class2 = class1;
}

