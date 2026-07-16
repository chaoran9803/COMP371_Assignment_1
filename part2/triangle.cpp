#include "triangle.h"
#include "point.h"
#include<iostream>
#include<cmath>

//Null contructor
Triangle::Triangle() : v1(nullptr), v2(nullptr), v3(nullptr) {}
//Constructor
Triangle::Triangle(Point* a, Point* b, Point *c) : v1(a), v2(b), v3(c) {}
//Destructor
Triangle::~Triangle() {}

//Accessors
Point* Triangle::getV1() const {
	return v1;
}

Point* Triangle::getV2() const {
        return v2;
}

Point* Triangle::getV3() const{
	return v3;
}


//setters


//Translate: move the whole triangle by d along the given axis
int Triangle::translate(int d, char axis){
	if(axis != 'x' && axis != 'y' && axis != 'z'){
		return -1;
	}
	v1->translate(d, axis);
	v2->translate(d, axis);
	v3->translate(d, axis);
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
  double a = distance(v1, v2);
  double b = distance(v2, v3);
  double c = distance(v3, v1);

  double s = (a + b + c) / 2;
  return sqrt(s * (s-a) * (s-b) * (s-c));
}



