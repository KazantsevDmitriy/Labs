#include "stdafx.h"
#include <math.h>
double PI = 3.1415926535;
double f(float x)
{
	return sin(PI + 3 * x) / (1 - sin(3 * x - PI));
}