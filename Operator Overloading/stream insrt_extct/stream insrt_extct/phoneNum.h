/*
* phoneNum.h
* 
* Created on Dec 29, 2015
*	Author: Hongmin
*/

#ifndef PHONENUM_H
#define PHONENUM_H

#include"Header.h"

class phoneNum{
	//overload the insertion operator to output a phoneNum object
	friend std::ostream& operator<<(std::ostream& os, const phoneNum& pho);

	//overload the extraction operator to input a phoneNum object
	friend std::istream& operator>>(std::istream& is, phoneNum& pho);
	
private:
	//data members
	string areaCode;
	string exchange;
	string line;
};



#endif /* PHONENUM_H */

