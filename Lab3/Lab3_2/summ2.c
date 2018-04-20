#include "stdafx.h"
#include "Header.h"
#include <math.h>
#include <limits.h>
double summ2(double eps)
{
	int i=0;
	double a=eps+1 , s = 0;
	while (fabs(a) > eps ) {
		a = pow(-1, i)*(i + 1) / (pow(i, 3) - pow(i, 2) + 1);
		s = +a;
		i++;
	}
	return s;
}