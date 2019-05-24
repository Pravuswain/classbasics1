//to find area by declaring a constructor of a rectangle from class of length and breadth
#include<iostream>
using namespace std;

//create class of rectangle with length and breadth  as information
class rectangle{
//set the data as public
	public:
//define the variables
	int l;
	int b;
//use a constructor
	 rectangle(){
		l=2;
		b=2;
					
	}
//find the area
	float area(){
		return l*b;
	}	






};
//to use the class create main function
int main(){
	
//as rectangle is a class ask for a rectangle r1
	rectangle r1;
//define the variables of r1 rectangle
	
//give out the area
	cout<< r1.area()<<endl;




	return 0;
}

