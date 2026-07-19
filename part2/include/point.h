#pragma once

class Point
{
private:
   int x, y, z;

public:
   // contructor
   Point(int a, int b, int c);
   // Destructor
   ~Point();

   // Accessors
   int getX() const;
   int getY() const;
   int getZ() const;

   // Setters
   int setX(int a);
   int setY(int b);
   int setZ(int c);

   // Translate
   int translate(int d, char axis);

   // Display
   void displayPoint();
};
