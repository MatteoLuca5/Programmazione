/// \file CRombo.cpp
///	\brief class Rombo: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "CRombo.h"

/// @brief default constructor 
Rombo::Rombo() {

	cout << "Rombo - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param d1 width of the Rombo
/// @param d2 height of the Rombo
Rombo::Rombo(float d1, float d2) {

	Init();

	cout << "Rombo - constructor" << endl;

	if (d1 <= 0. || d2 <= 0.) {
		WarningMessage("constructor: both diagonals should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(d1,d2);

}

/// @brief destructor 
Rombo::~Rombo() {

	cout << "Rombo - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Rombo::Rombo(const Rombo &r) { 

	cout << "Rombo - copy constructor" << endl;

	Init(r);
	
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rombo& Rombo::operator=(const Rombo &r) { 

	cout << "Rombo - operator =" << endl;

	Init(r);
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rombo::operator==(const Rombo &r) { 

	if (r.diagonal1 == diagonal1 && r.diagonal2 == diagonal2)
		return true;
		
	return false;
}

/// @brief default initialization of the object
void Rombo::Init() {
	SetDim(0,0);
	
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rombo::Init(const Rombo &r) {
	Init();
	SetDim(r.width,r.height);
}

/// @brief total reset of the object  
void Rombo::Reset() {
	
	SetDim(0,0);
	
}


/// @brief set width of the object
/// @param w width 
void Rombo::SetWidth(float w) {

	if (w < 0.) {
		WarningMessage("SetWidth: width should be > 0");
		return;
	}

	SetDim(w,height);

}

/// @brief set length of the object
/// @param h height 
void Rombo::SetHeight(float h) {

	if (h < 0.) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}

	SetDim(width,h);

}



/// @brief get width of the object
/// @return width 
float Rombo::GetWidth() {

	return width;

}

/// @brief get length of the object
/// @return height
float Rombo::GetHeight() {

	return height;
}

/// @brief set width and length of the object
/// @param w width 
/// @param h height
void Rombo::SetDim(float w, float h) {

	width = w;
	height = h;  
	
	return;
}

/// @brief get width and length of the object
/// @param w width 
/// @param h height
void Rombo::GetDim(float &w, float &h) {

	w = width;
	h = height; 
	
	return;
}

/// @brief computes the area of the object
/// @return the area 
float Rombo::GetArea() {
	
	return (width*height);
}

/// @brief computes the perimeter of the object
/// @return the area 
float Rombo::GetPerimeter() {
	
	return (2*(width+height));
}


/// @brief write an error message 
/// @param string message to be printed
void Rombo::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Rombo --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Rombo::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Rombo --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Rombo::Dump() {
	cout << endl;
	cout << "---Rombo---" << endl; 
	cout << endl;
	
	cout << "Width = " << width << endl;
	cout << "Heigth = " << height << endl;
	
	
	cout << endl;

}






