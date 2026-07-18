#include <iostream>
#include <random>
#include "point.h"
#include "triangle.h"


void showDemo();
int randNum();

void notValidInput(){



}





int main() {
  
   //Show demo
   showDemo();

    std::cout << "===This is a simple program for translation of Points and triangle and calculating the area)=== \n";
    std::cout << "Enter 1 to continue...  "
    int userIn;
    switch(std::cin >> userIn){
	case 1:
	break;
	deafult:
	 notValidInput

    }   



  return 0;
} 


void showDemo() {
	std::cout << "Welcome to Part 2 demo: Using The Principles of OOP \n";
	int p1= 1, p2 = 2, p3 =3, p4 = 8;
	std::cout << "The values for the demoPoints: p1, p2, p3 is given " << " p1:  " <<  p1 << "p2: " << p2 << "p3: " << p3 << "\n";

	Point demoPoints(p1,p2,p3);
	int d_1 = 1, d_2 = -3;
	char in_1 = 'x', in_2='y', in_3 = 'z', in_4 = 'q';
	std::cout << "The value of p1= " << p1<< " Translating demoPoints p1 with d=" << d_1 << " the axis = " << in_1<< " the output is " << demoPoints.translate(d_1, in_1) << "\n";
	std::cout << "The value of p1= "<< p1 << " Translating demoPoints p1 with d=" << d_2  << " the axis = " << in_1<< " the output is " << demoPoints.translate(d_2, in_1) << "\n"; 	
	std::cout << "The value of p2=" << p2<< " Translating demoPoints p2 with d=" << d_1 << " the axis = " << in_2 << " the output is " << demoPoints.translate(d_1, in_2) << "\n"; 	
	std::cout << "The value of p3= "<< p3<< " Translating demoPoints p3 with d=" << d_1 << " the axis = " << in_3 << " the output is " << demoPoints.translate(d_1, in_3) << "\n";
	
	std::cout << "Demostrate if axis is not x or y or z:\n ";
	std::cout << "The value of p4= "<< in_4 << " Translating demoPoints p4 with d=" << d_1 << " the axis = " << in_4 << " the output is " << demoPoints.translate(d_1, 'q') << "\n";
	
	std::cout << " Display points ";
	demoPoints.displayPoint();
	
	std::cout << "\n========Triangle=========";
	//Random number generator from 0-100
	srand(time(NULL));
	Triangle* triangle;
        Point v1(randNum(),randNum(),randNum()), v2(randNum(),randNum(),randNum()), v3(randNum(),randNum(),randNum());
 
 
       std::cout << "\nUsing points \t";
       triangle = new Triangle(&v1,&v2,&v3);
       triangle->displayPoint();
	
       //Calculate the area
	std::cout << "\n The area of the triangle: " << triangle->calcArea() << "m^2\n"; 	

}


int randNum(){
	return (rand() % 100) + 1;

}
