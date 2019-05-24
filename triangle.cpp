//to find area of a rectangle from class of length and breadth
#include<iostream>
using namespace std;

//create class of triangle with base and height  as information
class triangle{
//set the data as public
	public:
//define the variables
	int h;
	int b;
//set the parameter to find area
	float area(){
		return 0.5*b*h ;
	}	






};
//to use the class create main function
int main(){
	
//as triangle is a class ask for a triangle t1
	triangle t1;
//define the variables of t1 triangle
	t1.h=2 ;
	t1.b=3 ;
//give out the area
	cout<< t1.area()<<endl;




	return 0;
}

