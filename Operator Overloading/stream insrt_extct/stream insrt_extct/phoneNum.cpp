/*
* phoneNum.cpp
*
* Created on Dec 29, 2015
*	Author: Hongmin
*/


#include "phoneNum.h"

//Overload the insertion operator to output a phoneNum object
std::ostream& operator<<(std::ostream& os, const phoneNum& pho){
	os << "(" << pho.areaCode << ") "
		<< pho.exchange << "-" << pho.line;
	
	return os << endl; //enable cascade: cout<< a << b << c;
}

//Overload the extraction operator to input a phoneNum object
std::istream& operator>>(std::istream& is, phoneNum& pho){
	cout << "Please enter the phone num in the form: (888) 888-8888" << endl;
	is.ignore(); //skip "("
	is >> setw(3) >> pho.areaCode; //input areaCode
	is.ignore(2); //skip ")" and space
	is >> setw(3) >> pho.exchange; //input exchange
	is.ignore(); //skip "-"
	is >> setw(4) >> pho.line; //input line

	return is;  //enable cascade: cin>> a >> b >> c;
}






