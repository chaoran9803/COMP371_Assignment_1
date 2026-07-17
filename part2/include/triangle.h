#pragma once

class Point;

class Triangle {
  private:
   Point* p1, *p2, *p3;

  public:
    Triangle();
    Triangle(Point *a, Point* b, Point *c);
    ~Triangle();

    Point* getP1() const;
    Point* getP2() const;
    Point* getP3() const;

    //Translation   
    int translate(int d, char axis);

  //Calculate Area of Triangle
  double calcArea() const;

  //Display the triangle's three vertices
  void displayPoint() const;




};
