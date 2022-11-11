// areaPerimetertr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
/*Assignment II
write a program that conputes the area and perimeter of a right angled traingle give
-the base as 10, -height as 7, hypotenuse as 12*/

	//variable declaration and initializaiton
	float base = 10, height = 7, hypotenuse = 12;

	double area, perimeter;
	
	//logic
	area =  (base * height)/2;
	perimeter = base + height + hypotenuse;

	//output
	cout << "The perimeter is:" << perimeter << "\n" << " area of the triangle " << area;

}


