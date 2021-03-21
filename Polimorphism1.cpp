#include <cstdlib>
#include <iostream>

class Shape
{
	protected:
		int width;
		int height;
	public:
		void area() /* If area() would be virtual function compiler would look at the content not type*/ 
		{
			std::cout << "area of base class:" << std::endl;
		}
};
class Rectangle: public Shape
{
	public:
		void area()
		{
			std::cout << "area of rectangle:" << std::endl;
		}
};
class Triangle: public Shape
{
	public:
		void area()
		{
			std::cout << "area of triangle" << std::endl;
		}
};

int main()
{
	Shape* ptr;
	Shape shape1;
	Rectangle rec1;
	Triangle tri1;
	
	shape1.area();
	rec1.area();
	tri1.area();
	/* When the derived class' area function called by an base class pointer,
	compiler execute base class' function based on type*/
	// That's called static linkage or early binding
	ptr = &rec1;
	ptr->area();
	
	ptr = &tri1;
	ptr->area();
}
