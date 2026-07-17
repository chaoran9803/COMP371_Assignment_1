#include "triangle.h"
#include "point.h"
#include<iostream>
#include<cmath>

//Null contructor
Triangle::Triangle() : p1(nullptr), p2(nullptr), p3(nullptr) {}
//Constructor
Triangle::Triangle(Point* a, Point* b, Point *c) : p1(a), p2(b), p3(c) {}
//Destructor
Triangle::~Triangle() {}

//Accessors
Point* Triangle::getP1() const {
	return p1;
}

Point* Triangle::getP2() const {
        return p2;
}

Point* Triangle::getP3() const{
	return p3;
}

//Translate: move the whole triangle by d along the given axis
int Triangle::translate(int d, char axis){
	if(axis != 'x' && axis != 'y' && axis != 'z'){
		return -1;
	}
	// Translate using Point function
	p1->translate(d, axis);
	p2->translate(d, axis);
	p3->translate(d, axis);
	return 0;
}

//Distance between two points
static double distance(const Point* a, const Point* b){
	double dx = a->getX() - b->getX();
	double dy = a->getY() - b->getY();
	double dz = a->getZ() - b->getZ();
	return sqrt(dx*dx + dy*dy + dz*dz);
}

//Calc Area using Heron's formula
double Triangle::calcArea() const {
  double a = distance(p1, p2);
  double b = distance(p2, p3);
  double c = distance(p3, p1);

  double s = (a + b + c) / 2;
  return sqrt(s * (s-a) * (s-b) * (s-c));
}

//display point
void Triangle::displayPoint() const  {
  std::cout << "the coordinates of the triangle are:" << '\n';
  std::cout << "v1: (" << p1->getX() << ", " << p1->getY() << ", " << p1->getZ() << ")" << '\n';
  std::cout << "v2: (" << p2->getX() << ", " << p2->getY() << ", " << p2->getZ() << ")" << '\n';
  std::cout << "v3: (" << p3->getX() << ", " << p3->getY() << ", " << p3->getZ() << ")" << '\n';
}




