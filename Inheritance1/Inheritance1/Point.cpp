/*
* Point.cpp
*
* Created on Dec 30, 2015
*	Author: Hongmin
*/


#include "Point.h"

//Overload the insertion operator to output a phoneNum object
std::ostream& operator<<(std::ostream& os, const Point& p){
	os << "[" << p.x << ", " << p.y << "]";
	
	return os << endl; //enable cascade: cout<< a << b << c;
}

//Point constructor
Point::Point(int a, int b){
	x = a;
	y = b;
}






