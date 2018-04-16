#include <stdio.h>
#include "stdafx.h"
#include <Windows.h>
#include <locale.h>
#include "func.h"
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