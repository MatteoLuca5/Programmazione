#include "stupid_math.h"
#include <stdio.h>

int main(){
	int a = 2;
	int b = 22;
	float res;
	res = mean(a,b);
	printf("The mean of %d and %d is:\t%f\n", a, b, res);
	
	return 0;
}
