#include <stdio.h>

#include "f1.h"
#include "f2.h"
#include "libreria.h"

float globalF = 3.;

int main(){
	f1a();
	printf("\n\n\n");
	globalF = 32;
	
	
	p1(22., 12);
	p1(22.);
}
