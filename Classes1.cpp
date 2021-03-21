#include <cstdlib>
#include <iostream>

/* CLASSES */

class Box
{
	public:
		
		int width;
		int breadth;
		int height;
		
		int AreaofBox()
		{
			return width * breadth;
		}
		
		/* Declaring function */
		int getVolume();
};
/* Defining a function outside of the class */
int Box::getVolume()
{
	return width * breadth * height;
}

/* Scope resolution operator (::) is useful for getting the variable from another scope 
while you have a variable that has the same name*/

int main()
{
	Box Box1;
	std::cout << "Width:" << std::endl;
	std::cin >> Box1.width;
	std::cout << "Breadth:" << std::endl;
	std::cin >> Box1.breadth;
	std::cout << "Heigth:" << std::endl;
	std::cin >> Box1.height;

	std::cout << "Volume:" << Box1.getVolume() << std::endl;
}
