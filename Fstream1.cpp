#include <iostream>
#include <cstdlib>
#include <fstream>

/* ios::app ====> append
   ios::ate ====> output
   ios::in  ====> read
   ios::out ====> write 
   ios::trunc ==> truncation 
*/

int main()
{
	char data[20];
	
	std::fstream file("deneme1.txt", std::ios::out | std::ios::trunc );
	 // Open a file
	 
	file << "Deneme123"; // Write down
	
	file >> data; //Read
	
	std::cout << data << std::endl;
	
	file.close(); // Close the file
	
	return 0;
}
