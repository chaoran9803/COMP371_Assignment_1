#include <iostream>
#include <random>
#include "point.h"
#include "triangle.h"


//Generate Random Numbers from 0-100
int randNum(){
  return (rand() % 100) + 1;
}

void userDemo(){
	int x_1,y_1,z_1,x_2,y_2,z_2,x_3,y_3,z_3;
	std::cout << "This program will display  customizable 3D triangle and translation\n";
	std::cout << "\n Enter 3 numbers to create vertex_1 of the triangle - ex (1 2 3): ";
	std::cin >> x_1 >> y_1 >> z_1;

	std::cout << "\n Enter 3 numbers to create vertex_2 of the triangle - ex (5 3 6): ";
	std::cin >> x_2 >> y_2 >> z_2;
	
	std::cout << "\n Enter 3 numbers to create vertex_3 of the triangle - ex (0 9 8): ";
	std::cin >> x_3 >> y_3 >> z_3;
	
	Point v1(x_1,y_1,z_1), v2(x_2,y_2,z_2), v3(x_3,y_3,z_3);

	std::cout << "\n Creating a triangle class to display your 3D triangle...";	
	Triangle* userTriangle = new Triangle(&v1,&v2,&v3);
	
	//display user triangle
	userTriangle->displayPoint();
	
	std::cout << "\n Enter 'x' or 'y' or 'z' to translate triangle ";
	char in;
 	std::cin >> in;
	std::cout << " Enter a distance: ";
	int d;
	std::cin >> d;
	std::cout << " Triangle is now tanslating.... \n";
	userTriangle->translate(d,in);
	std::cout << "\n";
	userTriangle->displayPoint();

	std::cout<< "=== Now calcualating the area of your 3D triangle: " << userTriangle->calcArea() <<"m^2===\n";
	std::cout << "Thank you for using this program!\n ";



}

void showDemo() {
        std::cout << "====Welcome to Part 2 demo: Using The Principles of OOP==== \n";
        int p1= 1, p2 = 2, p3 =3, p4 = 8;
        std::cout << "\nThe values for the demoPoints: p1, p2, p3 is given " << " p1:  " <<  p1 << ", p2: " << p2 << ", p3: " << p3 << "\n";

        Point demoPoints(p1,p2,p3);
        int d_1 = 1, d_2 = -3;
        char in_1 = 'x', in_2='y', in_3 = 'z', in_4 = 'q';
        std::cout << "The value of p1= " << p1<< " Translating demoPoints p1 with d=" << d_1 << " the axis = " << in_1<< " the output is " << demoPoints.translate(d_1, in_1) << "\n";
        std::cout << "The value of p1= "<< p1 << " Translating demoPoints p1 with d=" << d_2  << " the axis = " << in_1<< " the output is " << demoPoints.translate(d_2, in_1) << "\n";
        std::cout << "The value of p2=" << p2<< " Translating demoPoints p2 with d=" << d_1 << " the axis = " << in_2 << " the output is " << demoPoints.translate(d_1, in_2) << "\n";
        std::cout << "The value of p3= "<< p3<< " Translating demoPoints p3 with d=" << d_1 << " the axis = " << in_3 << " the output is " << demoPoints.translate(d_1, in_3) << "\n";

        std::cout << "\nDemonnstrate if axis is not x or y or z:\n ";
        std::cout << "The value of p4= "<< in_4 << " Translating demoPoints p4 with d=" << d_1 << " the axis = " << in_4 << " the output is\n " << demoPoints.translate(d_1, 'q') << "\n";

        std::cout << "\nDisplay points\n ";
        demoPoints.displayPoint();

        std::cout << "\n========Triangle=========";
        //Random number generator from 0-100
        srand(time(NULL));
        Triangle* triangle;
        Point v1(randNum(),randNum(),randNum()), v2(randNum(),randNum(),randNum()), v3(randNum(),randNum(),randNum());


       std::cout << "\nUsing points \t";
       triangle = new Triangle(&v1,&v2,&v3);
       triangle->displayPoint();
	
	//Tranlate the triangle
	std::cout << "\nTranslate the triangle d=" << d_1 << " with 'x-axis' " << triangle->translate(d_1, in_1) << "\n ";
	triangle->displayPoint();
       //Calculate the area
     
        std::cout << "\n The area of the triangle: " << triangle->calcArea() << "m^2\n";

}


int main() {

    std::cout << "===This is a simple program for translation of Points and triangle and calculating the area)=== \n";
    std::cout << "Enter 1 to show triangle Demo, and 2 for user cuztomizable Triangle demo: ";
    bool valid = false;
    int userIn;

    while(!valid){
        if(!(std::cin >> userIn)){
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Please try again - enter 1 or 2: ";
                continue;
        }

         switch(userIn){
                case 1:
                showDemo();
                valid = true;
                break;
                case 2:
		userDemo();
                valid = true;
                break;
                default:
                std::cout << "Please try again - enter 1 or 2: ";

        }
    }



  return 0;
}
