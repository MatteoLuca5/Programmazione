#include <stdio.h>
#include "f1.h"
#include "f2.h"

void f1(){
	globalF++;
	printf("f1\n");
}

void f1a(){
	f2();
	printf("%f\n", globalF);
}
