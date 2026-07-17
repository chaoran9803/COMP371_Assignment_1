#include <iostream>
#include "point.h"
#include "triangle.h"
using std::cout;
using std::cin;



int main() {
  
 cout << "Demo of Point Class " << '\n';
 int x = 1, y = 2, z = 3; // axis values

 Point somePoint_1(x,y,z); 
 
  somePoint_1.displayPoint(); // display the hardoced xyz-axis
  cout << "Using distance = 1 to tranlate the y-axis: " << " current value of y-axis =" << somePoint_1.getY() << '\n';
 
  somePoint_1.translate(1,'y'); // test case for y axis with given distance input
   
  cout << "After translation the y-axis value is "<< somePoint_1.getY() << '\n';
  somePoint_1.translate(10, 'p');


   Triangle* triangle;
   Point p1(2,3,4);
   Point p2(4,5,6);
   Point p3(9,8,5);

   triangle = new Triangle(&p1,&p2,&p3);



  
  return 0;
} 
