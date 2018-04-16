#include <stdio.h>
#include "stdafx.h"
#include <Windows.h>
#include <locale.h>
#include <math.h>
double PI = 3.1415926535;
double f(float x);
int main()
{
	setlocale(LC_ALL, "Russian");
	float x;
	printf("Пожалуйста введите данные через Enter\n");
	scanf("%f", &x);
	printf("x = %.4f\nf = %.4f\n", x,f(x));
	system("pause");
	return 0;
}
double f(float x)
{
	return sin(PI + 3 * x) / (1 - sin(3 * x - PI));
}
