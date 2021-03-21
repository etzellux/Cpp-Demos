#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));
	int x = rand()%10;
	
	std::cout<<x;
	
	return 0;
}
