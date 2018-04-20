#include "stdafx.h"
#include "Header.h"
#include <math.h>
#include <limits.h>
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a;
	do {
		a = pow(-1, i)*(i + 1) / (pow(i, 3) - pow(i, 2) + 1);
		if (fabs(a) <= eps && a < 0) return i;
		i++;
	} while (true);
	return i;
}