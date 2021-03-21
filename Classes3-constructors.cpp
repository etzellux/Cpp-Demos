#include <cstdlib>
#include <iostream>

/* CONSTRUCTOR DESTRUCTOR */

class Book
{
	public:
		char author[20];
		char title[20];
		int pagesize;
		
		/* This is the constructor function , when an object is created this object is called */
		Book(int);
		~Book();
};

/* Initialization with constructor parameters */
Book::Book(int c):
	pagesize(c)    /* C::C(int a,int b,...): X(a),Y(b),Z(c) */
	{
		std::cout << "object has been created" << std::endl;
	}
/* Destructor function: it's called when an object's class is going away from scope or it is deleted*/
Book::~Book()
{
	std::cout << "object has been destructed";
}
	
int main()
{
	Book book1(30);
	
	std::cout << book1.pagesize << std::endl;
}
