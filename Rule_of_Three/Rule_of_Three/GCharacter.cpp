/*
* GCharacter.cpp
*
* Created on Dec 26, 2015
*	Author: Hongmin
*/


#include "GCharacter.h"

//Overload the insertion operator to output a GCharacter object
std::ostream& operator<<(std::ostream& os, const GCharacter& gc){
	os << "Game Character: " << gc.name <<
		"\nhas the following tools: " << endl << "| ";
	
	//output all the items in toolHolder
	for (int i = 0; i < gc.used; i++){
		os << gc.toolHolder[i] + " | ";
	}
	
	return os << endl;
}


//Constructor
GCharacter::GCharacter(string n, int cpt){
	this->name = n;
	this->capacity = cpt;
	this->used = 0;
	this->toolHolder = new string[cpt];
}


//Copy Constructor
GCharacter::GCharacter(const GCharacter& source){
	cout << "Copy Constructor called." << endl;

	this->name = source.name;
	this->capacity = source.capacity;
	this->used = source.used;
	this->toolHolder = new string[source.capacity];

//	copy(source.toolHolder, source.toolHolder + used, toolHolder);

	//the same functionality with the above "copy"
	for (int i = 0; i < source.used; i++){
		this->toolHolder[i] = source.toolHolder[i];
	}
}


//Overloaded Assignment Operator(returning a GCharacter&, because we could chain like gc1 = gc2 = gc3)
GCharacter& GCharacter::operator=(const GCharacter& source){
	cout << "Overloaded Assignment called." << endl;

	//check for self assignment
	//gc1 = gc1
	if (this == &source){
		return *this;
	}
	this->name = source.name;
	this->capacity = source.capacity;
	this->used = source.used;
	//this->toolHolder = new string[source.capacity];

//	copy(source.toolHolder, source.toolHolder + used, this->toolHolder);

	//the same functionality with the above "copy"
	for (int i = 0; i < source.used; i++){
		this->toolHolder[i] = source.toolHolder[i];
	}

	return *this;
}


//Destructor
GCharacter::~GCharacter(){
	cout << "Destructor called for " << this->name
		<< " @ this memory location " << this << endl;
	delete[]this->toolHolder;
}


//Insert a new tool into the toolHolder
void GCharacter::insert(const string& toolName){
	if (used == capacity){
		cout << "Tool Holder is full, cannot add more tools\n" << endl;
	}
	else{
		this->toolHolder[used] = toolName;
		this->used++;
	}
}



