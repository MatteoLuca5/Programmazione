#ifndef _STUPIDMATHH_
#define _STUPIDMATHH_

typedef struct complex_int {
	int x;
	int y;
}complex_int_t;

typedef struct complex_float {
	float x;
	float y;
}complex_float_t;

float mean(int a, int b);
complex_float_t complex_mean(complex_int_t a, complex_int_t);

#endif
