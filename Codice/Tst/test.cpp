
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "exception.h"

using namespace std;



int main(){
	try{
		int x = 2, y = 3;
		FILE* fp;
		fp = fopen("lol.matteo", "r");
		if (fp == NULL){
			ExceptionFS A(1);
			throw A;
		}
		int z;
		if (x == 0){
			ExceptionZero B(2);
			throw B;
		}
		z = y/x;
		fscanf(fp, "%d", &x);
		int ohno = 0;
		//z = 3/ohno;
	}
	catch(ExceptionFS LilBitch){
		LilBitch.snitch();
	}
	catch (ExceptionZero BigDude){
		BigDude.snitch();
	}
	catch(...){
		cout << "Generic exception" << endl;
	}
}
