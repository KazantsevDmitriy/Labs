#include "stdafx.h"
#include "Header.h"
#include <math.h>
double summ(int n) 
{
	int i;
	double a=0;
	for(i=0; i < n; i++) {
		a = +pow(-1, i)*(i + 1) / (pow(i, 3) - pow(i, 2) + 1);
	}
	return a;
}