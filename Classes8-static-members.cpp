#include <cstdlib>
#include <iostream>
//STATIC MEMBERS
class MyClass
{
	public:
		static int var1;
		/* Static functions can only use static members */
		
		static void display()
		{
			std::cout << var1 << std::endl;
		}
};
/* Initialize it in globe scope */
int MyClass::var1 = 5;

int main()
{
	MyClass::display();
}
