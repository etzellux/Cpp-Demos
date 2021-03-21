#include <iostream>

//enum name{list,};
enum variables
{
	x,y,z
};

int main()
{
	// typedef type newname
	typedef int integer;
	integer x = 5;
	
	std::cout<<x<<"\n";
	
	variables c = y;
	
	std::cout<<c<<"\n";
}
