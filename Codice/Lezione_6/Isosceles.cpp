/// \file CIsosceles.cpp
///	\brief class Isosceles: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "Isosceles.h"

/// @brief default constructor 
Isosceles::Isosceles() {

	cout << "Isosceles - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param w width of the Isosceles
/// @param h height of the Isosceles
Isosceles::Isosceles(float s, float b) {

	Init();

	cout << "Isosceles - constructor" << endl;

	if (s <= 0. || b <= 0.) {
		WarningMessage("constructor: side and base should be > 0"); 
		SetDim(0,0);
	}
	else if (2 * s <= b){
		WarningMessage("constructor: side and base not compatible");
	}
	else
		SetDim(s,b);

}

/// @brief destructor 
Isosceles::~Isosceles() {

	cout << "Isosceles - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Isosceles::Isosceles(const Isosceles &r) { 

	cout << "Isosceles - copy constructor" << endl;

	Init(r);
	
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Isosceles& Isosceles::operator=(const Isosceles &r) { 

	cout << "Isosceles - operator =" << endl;

	Init(r);
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Isosceles::operator==(const Isosceles &r) { 

	if (r.side == side && r.base == base)
		return true;
		
	return false;
}

/// @brief default initialization of the object
void Isosceles::Init() {
	SetDim(0,0);
	
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Isosceles::Init(const Isosceles &r) {
	Init();
	SetDim(r.side,r.base);
}

/// @brief total reset of the object  
void Isosceles::Reset() {
	
	SetDim(0,0);
	
}


/// @brief set width of the object
/// @param w width 
void Isosceles::SetSide(float s) {

	if (s < 0.) {
		WarningMessage("SetSide: side should be > 0");
		return;
	}
	else if (2 * s <= b){
		WarningMessage("SetSide: side not comaptible with base");
		return;
	}

	SetDim(s,base);

}

/// @brief set length of the object
/// @param h height 
void Isosceles::SetBase(float b) {

	if (b < 0.) {
		WarningMessage("SetBase: base should be > 0");
		return;
	}
	else if (2 * s <= b){
		WarningMessage("SetBase: base and sides not compatible");

	}

	SetDim(b,s);

}



/// @brief get width of the object
/// @return width 
float Isosceles::GetSide() {

	return side;

}

/// @brief get length of the object
/// @return height
float Isosceles::GetBase() {

	return base;
}

float Isosceles::get

/// @brief set width and length of the object
/// @param w width 
/// @param h height
void Isosceles::SetDim(float w, float h) {

	width = w;
	height = h;  
	Quadrilateral::SetSides(w,h,w,h);
	
	return;
}

/// @brief get width and length of the object
/// @param w width 
/// @param h height
void Isosceles::GetDim(float &w, float &h) {

	w = width;
	h = height; 
	
	return;
}

/// @brief computes the area of the object
/// @return the area 
float Isosceles::GetArea() {
	
	return (width*height);
}


/// @brief write an error message 
/// @param string message to be printed
void Isosceles::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Isosceles --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Isosceles::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Isosceles --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Isosceles::Dump() {
	cout << endl;
	cout << "---Isosceles---" << endl; 
	cout << endl;
	
	cout << "Width = " << width << endl;
	cout << "Heigth = " << height << endl;
	
	Quadrilateral::Dump();
	
	cout << endl;

}






