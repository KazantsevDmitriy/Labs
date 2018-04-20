#include "stdafx.h"
#include "Header.h"
#include <math.h>
#include <limits.h>
int findFirstElement(double eps)
{
	int i=0;
	double a;
	while (true) {
		a = pow(-1, i)*(i + 1) / (pow(i, 3) - pow(i, 2) + 1);
		if (fabs(a) <= eps) break;
		i++;
	}
	return i;
}