#include "stdafx.h"
#include "Header.h"
#include <math.h>
double summ(int n)
{
	int i = 0;
	double a = 0;
	do {
		a = +pow(-1, i)*(i + 1) / (pow(i, 3) - pow(i, 2) + 1);
		++i;
	} while (i <= (n - 1) );
	return a;
}