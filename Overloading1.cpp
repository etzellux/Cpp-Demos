#include <iostream>
#include <cstdlib>

/* Function Overloading*/
/* A function can be defined more than one time */
class MyClass
{
	public:
		int x;
		double y;
		float z;
		
		void print(int a)
		{
			this->x = a;
			std::cout << "printing x:" << x << std::endl;
		}
		void print(double b)
		{
			this->y = b;
			std::cout << "printing y:" << y << std::endl;
		}
		void print(float c)
		{
			this->z = c;
			std::cout << "printing z:" << z << std::endl;
		}
};

int main()
{
	MyClass class1;
	class1.print(11);
	class1.print(double(11.21312));
	class1.print(float(11.5));
}
