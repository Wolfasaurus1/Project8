#include <iostream>

//include c++ standard library as a prefix when necessary so that you don't have to repeat it manually and redundantly
using namespace std;

//create box class
class box
{
public:
	//declare variables
	int height;
	int width;
	int length;

	//function to set the length of the box
	int setLength(int &l)
	{
		return length = l;
	}
	//function to set the width of the box
	int setwidth(int &w)
	{
		 return width = w;
	}
	//function to set the height of the box
	int setheight(int &h)
	{
		return height = h;
	}
};
int main()
{
	//initialize an isntance of the box class and enter argument within parameters, then declare a pointer
	box box1;
	box *ptrbox;

	//set the pointer equal to the address of the instance of the class
	ptrbox = &box1;

	//de-reference the pointer to the box and intialize the height attribute with a value of 5
	ptrbox->height = 5;

	//initialize a reference and call the setWidth function inside the box class, setting necessary parameters
	int b = 5;
	box1.setwidth(b);
	
	//display the value of the width of box1 using a pointer
	cout << ptrbox->width << endl;
	
	//keep the window open after the results are shown
	cin.ignore(10, '\n');
	cin.get();

	//return value of 0
	return 0;
	
}