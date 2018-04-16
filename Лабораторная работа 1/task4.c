#include <stdio.h>
#include "stdafx.h"
#include <Windows.h>
#include <locale.h>
#include <math.h>
double PI = 3.1415926535;
float x, result;
void f();
int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Пожалуйста введите данные через Enter\n");
	scanf("%f", &x);
	f();
	printf("x = %.4f\nf = %.4f\n", x, result);
	system("pause");
	return 0;
}
void f()
{
	result = sin(PI + 3 * x) / (1 - sin(3 * x - PI));
}