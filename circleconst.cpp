//to find area of a circle from class of radii
#include<iostream>
using namespace std;

//create class of circle with radius as information
class circle{
//set the data as public
	public:
//define the variables
	int r;
	float pi;
//declare a constructor
	circle(){
		pi=3.14;
		r=2;
	}
//set the parameter to find area
	float area(){
		return pi*r*r ;
	}	






};
//to use the class create main function
int main(){
	
//as circle is a class ask for a circle c1
	circle c1;
	

//give out the area
	cout<< c1.area()<<endl;




	return 0;
}


