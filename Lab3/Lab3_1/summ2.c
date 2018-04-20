#include "stdafx.h"
#include "Header.h"
#include <math.h>
#include <limits.h>
double summ2(double eps)
{
	int i;
	double a ,s = 0;
	for (i = 0; i < INT_MAX ; i++) {
		a = pow(-1, i)*(i + 1) / (pow(i, 3) - pow(i, 2) + 1);
		s = +a;
		if (fabs(a) <= eps) break;
	}
	return s;
}