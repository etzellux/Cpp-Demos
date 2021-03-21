#include <cstdlib>
#include <iostream>

/* INLINE FUNCTIONS */

inline int Max(int a,int b)
{
	return (a>b) ? a:b;
}

int main()
{
	std::cout << Max(10,5) << std::endl;
	return 0;
}
