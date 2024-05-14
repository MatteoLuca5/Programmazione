#include<iostream>

#include "CRectangle.h"

int main() {

	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rectangle rectC = rectB;
	
	cout << endl;
	cout << "rectangle A" << endl;
	rectA.Dump();

	cout << endl;	
	cout << "rectangle B" << endl;
	rectB.Dump();
	
	rectA = rectB; 
	
	cout << endl;
	cout << "rectangle A" << endl;
	rectA.Dump(); 
	cout << endl;
	cout << "rectangle B" << endl;
	rectB.Dump(); 
	
	rectC.SetDim(13,9);
	
	if (rectA == rectC) 
		cout<< "A e C sono uguali" << endl;
	else 
		cout<< "A e C sono diversi" << endl;
		
	
	return 0;

}
