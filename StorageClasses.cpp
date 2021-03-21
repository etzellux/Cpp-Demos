#include <iostream>

int x = 20; // Global deðiþken

extern int t; //Deðiþkenin baþka bir sayfada tanýmlandýðýný belirtir.

void func();

int main()
{
	// STORAGE CLASSES
	
	func();
	func();
	
	auto int x = 10; // Local deðiþken globalden önceliklidir.
	
	std::cout<<x;
	
	register int y = 15;
	
}

void func()
{
	static int x = 5;
	std::cout<<x<<"\n";
	x++;
}
