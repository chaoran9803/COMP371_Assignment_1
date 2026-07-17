#include "point.h"
#include <iostream>
//Constructor
Point::Point(int a, int b, int c ) : x(a), y(b), z(c) {} 

//Destructor
Point::~Point(){}

//Accessors
int Point::getX() const {
  return x;
}

int Point::getY() const {
  return y;    
}

int Point::getZ() const {
 return z;
}

//Setters
int Point::setX(int newX){
 return x = newX;
}

int Point::setY(int newY){
 return y = newY;
}

int Point::setZ(int newZ){
 return z = newZ;
}

//Translate
int Point::translate(int d, char axis){
   switch(axis)	{
	case 'x':
	    x+=d;
	    break;
        case 'y':
 	    y+=d;
            break;
  	case 'z':
            z+=d;
	    break;
	default:
   	   std::cout << "The axis input could not be recognize \n";
	   return -1;
   }
  
 return 0;
}

void Point::displayPoint(){
  std:: cout << "the value of x-axis: " << getX() << '\n';
  std:: cout << "the value of y-axis: " << getY() << '\n';
  std:: cout << "the value of z-axis: " << getZ() << '\n';
}


