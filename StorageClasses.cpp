#include <iostream>

int x = 20; // Global de�i�ken

extern int t; //De�i�kenin ba�ka bir sayfada tan�mland���n� belirtir.

void func();

int main()
{
	// STORAGE CLASSES
	
	func();
	func();
	
	auto int x = 10; // Local de�i�ken globalden �nceliklidir.
	
	std::cout<<x;
	
	register int y = 15;
	
}

void func()
{
	static int x = 5;
	std::cout<<x<<"\n";
	x++;
}
