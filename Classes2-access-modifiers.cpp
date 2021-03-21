#include <cstdlib>
#include <iostream>

/* CLASS ACCESS MODIFIERS */

class Box
{
	/* Public variables can be accessed by anything */
	public:
		int width;
		
		void setHeight(int);
		int getHeight(void);
	
		void setBreadth(int);
		int getBreadth(void);
	
	/* Private variables can be accessed by only class member functions and it's default. */
	private:
		int height;
	/* Protected access modifier is similar to the private
	but protected members also accessed by the child classes */
	protected:
		int breadth;
		
};

void Box::setHeight(int a)
{
	height = a;
}
int Box::getHeight()
{
	return height;
}

void Box::setBreadth(int a)
{
	breadth = a;
}
int Box::getBreadth()
{
	return breadth;
}

int main()
{
	Box Box1;
	Box1.width = 10;
	std::cout << "width:" << Box1.width << std::endl;
	
	Box1.setHeight(8);
	std::cout << "height:" << Box1.getHeight() << std::endl;
	
	Box1.setBreadth(6);
	std::cout << "breadth:" << Box1.getBreadth() << std::endl;
}

