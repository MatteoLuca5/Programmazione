#include <stdio.h>
#include "libreria.h"

/*void p1(float x){
	x++;
}*/

void p1(float x, int q){
	x--;
	q = 3;
	printf("p1b\n");
}

void p1(double y, int q){
	y--;
	q = 5;
	printf("p1c\n");
}

void p1(float y, char q){
	printf("\np1 con char default: %c\n", q);
}
