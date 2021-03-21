#include <iostream>
#include <cstdlib>

#include <iomanip> // setw()
// I/O

int main()
{
	int x;
	std::cout<<"aaaaaa"<<"\n";
	
	std::cin>>x;
	
	std::cout<<x<<std::endl;
	
	std::cerr<<"error1"<<"\n"; //un-buffered error
	
	std::clog<<"error2"<<"\n"; //buffered error
	
	std::cout<< std::setw(10) << "bummm"<<std::endl; //outputu istenilen karakter sayýsýnda düzenler.
	
	std::cout<<"hello world!";
	
	return 0;
}
