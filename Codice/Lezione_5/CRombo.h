/*! \file CRombo.h
	\brief Declaration of the class Rombo

	Details.
*/


#ifndef ROMBO_H
#define ROMBO_H

#include<iostream>


using namespace std;

/// @class Rombo
/// @brief to manage an object with the shape of a rhombus
class Rombo
{
private:
	float diagonal1;
	float diagonal2
	

public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rombo();
	Rombo(float d1, float d2);
	Rombo(const Rombo &r);
	
	~Rombo();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Rombo& operator=(const Rombo &r); 
	bool operator==(const Rombo &r);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Rombo &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetDiagonals(float d1, float d2);
	void setDiagonal1(float d);
	void setDiagonal2(float d);
		
	void GetDiagonals(float &d1, float &d2); 
	float GetPerimeter(); 
	float GetArea();
	float getSide();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
		
};

#endif
