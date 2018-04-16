#include <stdio.h>
#include "stdafx.h"
#include <Windows.h>
#include <locale.h>
double PI = 3.1415926535;
double f(double x, double y)
{
	return sin(PI + 3 * x) / (1 - sin(3 * x - PI));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double f1, x, y;
	//x = 1;
	//y = 2;
	// f = sin(PI + 3 * x) / (1 - sin(3 * x - PI));
	//printf("x = %.4f\ny = %.4f\nf = %.4f\n", x, y, f);
	printf("Пожалуйста введите данные через Enter\n");
	scanf("%f\n%f", &x, &y);
	//f = sin(PI + 3 * x) / (1 - sin(3 * x - PI));
	printf("x = %.4f\ny = %.4f\nf = %.4f\n", x, y, f(x, y));
	system("pause");
	return 0;
}
