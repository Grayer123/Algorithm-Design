/*
* GCApp.cpp
*
* Created on Dec 26, 2015
*	Author: Hongmin
*/

#include"GCharacter.h"

//example for copy constructor be called
GCharacter exmpl(GCharacter TempGC){
	cout << "//Copy Constructor be called twice." << endl;
	cout << "//Once for the formal parameter being passed by value" << endl;
	cout << "//Once for the return value" << endl;
	return TempGC;
}


int main(){
	GCharacter gc1;
	gc1.insert("potion"); gc1.insert("crossbow"); gc1.insert("candle");
	gc1.insert("cloak");  gc1.insert("sword");  gc1.insert("book of spell");
	cout << gc1 << endl;
	//cout << endl;

	GCharacter gc2("Bob", 5);
	gc2.insert("ax");
	cout << endl;

	cout << "An example of function to invoke copy constructor" << endl;
	exmpl(gc2); // example for copy constructor being called.
	cout << endl;

	//copy constructor
	GCharacter gc3(gc1); //copy constructor
	GCharacter gc4 = gc2; //copy constructor
	cout << endl;

	//overloaded assignment operator
	gc4 = gc1;
	cout << endl;

	return 0;
}