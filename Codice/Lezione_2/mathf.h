#ifndef _MATHF_
#define _MATHF_

double Polynomial(double* coeff, int size, double in);

void Rectangular(double* values, int size, double stepsize, double* integ1, double* integ2);

double Trapezoidal(double* values, int size, double stepsize);

#endif
