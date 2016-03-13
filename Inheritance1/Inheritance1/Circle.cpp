/*
* Circle.cpp
*
* Created on Dec 30, 2015
*	Author: Hongmin
*/


#include "Circle.h"

//Overload the insertion operator to output a Circle object
std::ostream& operator<<(std::ostream& os, const Circle& c){
	os << "Center Cooperate = " 
		<< static_cast<Point>(c) // << Point, actually use Point.operator<<
		<< "Radius = "
		<< setiosflags(ios::fixed | ios::showpoint) //show the result with precision point
		<< setprecision(2) << c.radius;
	
	return os << endl; //enable cascade: cout<< a << b << c;
}

//Circle constructor
Circle::Circle(int a, int b, double r) /*: Point(a, b)*/ //call base class constructor
{
	setRadius(r);
	/*setX(a);
	setY(b);*/
}






