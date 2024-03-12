#include "stupid_math.h"

float mean(int a, int b){
	return (a + b) / 2;
}

complex_float_t complex_mean(complex_int_t a, complex_int_t b){
	complex_float_t res = {0 , 0};
	res.x = ((float)a.x + (float)b.x) / 2;
	res.y = ((float)a.y + (float)b.y) / 2;

	return res;
}
