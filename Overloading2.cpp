#include <cstdlib>
#include <iostream>

/* Operator overloading*/
/* return-type operator (parameters){}  */
class Box
{
	public:
		int height;
		int breadth;
		int width;
		
		void getVolume()
		{
			std::cout << "Volume:" << height*breadth*width << std::endl;
		}
		
		Box operator+ (const Box &obj)
		{
			Box box;
			box.breadth = this->breadth + obj.breadth;
			box.width = this->width + obj.width;
			box.height = this->height + obj.height;
			
			return box;
		}
};

int main()
{
	Box box1,box2,box3;
	
	//box1 initialization
	box1.breadth = 3;
	box1.height = 4;
	box1.width = 5;
	
	//box2 initialization
	box2.breadth = 6;
	box2.height = 8;
	box2.width = 10;
	
	box3 = box1 + box2;
	
	box1.getVolume();
	box2.getVolume();
	box3.getVolume();
}
