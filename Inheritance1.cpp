#include <iostream>
#include <cstdlib>

/* INHERITANCE */
// class derived-class: access-specifier base-class

class Base
{
	public:
		int x,y,z;
		
		void func()
		{
			std::cout << x*y*z << std::endl;
		}
	private:
		int k,l,m;
		
		void func2()
		{
			std::cout << k*l*m << std::endl;
		}
	protected:
		int a,b,c;
		
		void func3()
		{
			std::cout << a*b*c << std::endl;
		}
};

class Child: public Base
{
	public:
		int i,j,k;
};
int main()
{
	Child child1;
	child1.x = 5;
	child1.y = 10;
	child1.z = 15;
	child1.func();
}
