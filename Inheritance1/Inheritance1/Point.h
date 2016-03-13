/*
* point.h
* 
* Created on Dec 30, 2015
*	Author: Hongmin
*/

#ifndef POINT_H
#define POINT_H

#include"Header.h"

class Point{
	//Overload the insertion operator to output a point object
	friend std::ostream& operator<<(std::ostream& os, const Point& pho);
public:
	Point(int = 0, int = 0);

	void setX(const int& tmp){
		x = tmp;
	}
	int getX() const{
		return x;
	}

	void setY(const int& tmp){
		y = tmp;
	}
	int getY() const{
		return y;
	}

	
private:
	//data members
	int x; //coordinate
	int y;
};



#endif /* POINT_H */

