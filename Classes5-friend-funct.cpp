#include <cstdlib>
#include <iostream>

/* FRIEND FUNCTIONS */

class MyClass
{
	public:
		
		int data;
		
		MyClass();
		~MyClass();
		
		friend void display(MyClass class1); /* Friend function declaration */
		friend class MyClass2; /* Friend class declaration */
};

class MyClass2
{
	public:
		void printsome(MyClass class1)
		{
			std::cout << class1.data + 5 << std::endl;
		}
};

MyClass::MyClass()
{
	std::cout << "object has been created" << std::endl;
}
MyClass::~MyClass()
{
	std::cout << "object has been deleted" << std::endl;
}
void display(MyClass class1)
{
	std::cout << class1.data << std::endl;
}
int main()
{
	MyClass class1;
	class1.data = 10;
	
	display(class1);
	
	MyClass2 class2;
	
	class2.printsome(class1);
}
