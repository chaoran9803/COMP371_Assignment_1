#pragma once

class Point;

class Triangle {
  private:
   Point* v1, *v2, *v3;

  public:
    Triangle();
    Triangle(Point *a, Point* b, Point *c);
    ~Triangle();

    Point* getV1() const;
    Point* getV2() const;
    Point* getV3() const;

    //Translation   
    int translate(int d, char axis);

  //Calculate Area of Triangle
  double calcArea() const;




};
