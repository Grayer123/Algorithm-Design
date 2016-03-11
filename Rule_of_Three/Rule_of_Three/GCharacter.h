/*
* GCharacter.h
* 
* Created on Dec 26, 2015
*	Author: Hongmin
*/

#ifndef GCHARACTER_H
#define GCHARACTER_H

#include"Header.h"

class GCharacter{
	//Overload the insertion operator to output a GCharacter object
	friend std::ostream& operator<<(std::ostream& os, const GCharacter& gc);
	
public:
	static const int DEFAULT_CAPACITY = 5;

	//Constructor
	GCharacter(string = "Grayer", int = DEFAULT_CAPACITY);

	//Copy Constructor
	GCharacter(const GCharacter&);

	//Overloaded Assignment Operator(returning a GCharacter&, because we could chain like gc1 = gc2 = gc3)
	GCharacter& operator=(const GCharacter&);

	//Destructor
	~GCharacter();

	//Insert a new tool into the toolHolder
	void insert(const string&);
	
private:
	//data members
	string name;
	int capacity;
	int used;
	string *toolHolder;
};



#endif /* GCHARACTER_H */

