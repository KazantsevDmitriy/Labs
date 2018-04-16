#include <stdio.h>
#include "stdafx.h"
#include <Windows.h>
#include <locale.h>
#include <math.h>
double PI = 3.1415926535;
int main()
{
	setlocale(LC_ALL, "Russian");
	float f, x;
	x = 1;
	f = sin(PI + 3 * x) / (1 - sin(3 * x - PI));
	printf("x = %.4f\nf = %.4f\n", x, f);
	printf("Пожалуйста введите данные через Enter\n");
	scanf("%f", &x);
	f = sin(PI + 3 * x) / (1 - sin(3 * x - PI));
	printf("x = %.4f\nf = %.4f\n", x, f);
	system("pause");
	return 0;
}