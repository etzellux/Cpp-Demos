#include <iostream>

int x = 20; // Global değişken

extern int t; //Değişkenin başka bir sayfada tanımlandığını belirtir.

void func();

int main()
{
	// STORAGE CLASSES
	
	func();
	func();
	
	auto int x = 10; // Local değişken globalden önceliklidir.
	
	std::cout<<x;
	
	register int y = 15;
	
}

void func()
{
	static int x = 5;
	std::cout<<x<<"\n";
	x++;
}
