#include <stdio.h>
#include "stdafx.h"
#include <Windows.h>
#include <locale.h>
float x, result;
void f();
int main()
{
	setlocale(LC_ALL, "Russian");
	printf("���������� ������� ������ ����� Enter\n");
	scanf("%f", &x);
	f();
	printf("x = %.4f\nf = %.4f\n", x, result);
	system("pause");
	return 0;
}
