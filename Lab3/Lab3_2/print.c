#include "stdafx.h"
#include "Header.h"
#include <math.h>
void print(int n, int k)
{
	int i=0;
	double a;
	while (i < n) {
		if (i % k == 0 && i != 0) {
			i++;
			continue;
		}
		a = pow(-1, i)*(i + 1) / (pow(i, 3) - pow(i, 2) + 1);
		printf("%.4f ", a);
		i++;
	}
	printf("\n");
}