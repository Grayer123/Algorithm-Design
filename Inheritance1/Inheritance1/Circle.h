/*
* Circle.h
* 
* Created on Dec 30, 2015
*	Author: Hongmin
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include"Header.h"
#include"Point.h"

#define PI 3.14158265

class Circle : public Point{
	//Overload the insertion operator to output a phoneNum object
	friend std::ostream& operator<<(std::ostream& os, const Circle& c);
public:
	Circle(int = 0, int = 0, double = 0);

	void setRadius(const double& tmp){
		radius = (tmp > 0 ? tmp : 0);
	}
	double getRadius() const{
		return radius;
	}

	double getDiameter() const{
		return 2 * radius;
	}

	double getArea() const{
		return PI * radius * radius;
	}

	double getCircumference() const{
		return 2 * PI * radius;
	}
	
private:
	//data members
	double radius;
};



#endif /* PHONENUM_H */

