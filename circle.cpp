//to find area of a circle from class of radii
#include<iostream>
using namespace std;

//create class of circle with radius as information
class circle{
//set the data as public
	public:
//define the variables
	int r;
//set the parameter to find area
	float area(){
		return 3.14*r*r ;
	}	






};
//to use the class create main function
int main(){
	
//as circle is a class ask for a circle c1
	circle c1;
//define the radius of c1 circle
	 c1.r=2 ;
//give out the area
	cout<< c1.area()<<endl;




	return 0;
}


