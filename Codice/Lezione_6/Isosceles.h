/*! \file CIsosceles.h
	\brief Declaration of the class Isosceles

	Details.
*/


#ifndef Isosceles_H
#define Isosceles_H

#include<iostream>

#include "CTriangle.h"

using namespace std;

/// @class Isosceles
/// @brief to manage an object with the shape of a Isosceles
class Isosceles : public Triangle
{
protected:
	float side;
	float base;
	float height;

public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Isosceles();
	Isosceles(float s, float b);
	Isosceles(const Isosceles &r);
	
	~Isosceles();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Isosceles& operator=(const Isosceles &r); 
	bool operator==(const Isosceles &r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Isosceles &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetHeight(float h);
	void SetBase(float b);
	void SetDim(float b, float h);
	void setSide(float s);
	
	void GetDim(float &w, float &h);
	float GetHeight();
	float GetWidth(); 
	float getSide();
	
	float GetArea();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
		
};

#endif
