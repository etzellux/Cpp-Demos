#include <cstdlib>
#include <iostream>

/* THIS POINTER */

class MyClass
{
	public:
		int data;
		
		int setData(int data)
		{
			this->data = data;
		}
};
int main()
{
	MyClass class1;
	class1.setData(10);
	std::cout << class1.data << std::endl;
}
