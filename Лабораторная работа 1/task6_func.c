#include "stdafx.h"
#include <math.h>
float x, result;
double PI = 3.1415926535;
void f()
{
	result = sin(PI + 3 * x) / (1 - sin(3 * x - PI));
}