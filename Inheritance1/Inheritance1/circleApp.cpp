/*
* circleApp.cpp
*
* Created on Dec 30, 2015
*	Author: Hongmin
*/

#include"Circle.h"

int main(){
	Circle c(5, 6, 2);
	cout << c;
	cout << "The erea of the circle is " << c.getArea() << endl;
	return 0;
}