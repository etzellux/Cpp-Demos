#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

class Saver
{
	public:
		char data[20];
		
		void upload(char* a)
		{
			std::ofstream ofile("Deneme1.txt",std::ios::trunc | std::ios::out);
			ofile << a << " ";
		}
		void download()
		{
			std::ifstream ifile("Deneme1.txt",std::ios::in);
			ifile >> data;
		}
};

int main()
{
	char text[20] = "Merhaba!";
	Saver* obj = new Saver;
	obj->upload(text);
	obj->download();
	std::cout << obj->data;
}
