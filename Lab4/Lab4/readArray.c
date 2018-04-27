#include "stdafx.h"
#include <stdio.h> 
#include "Header.h"
#include <locale.h>
void readArray(int *arr, int n)
{
	int z;
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < n; i++)
	{
		printf("¬ведите элемент массива:\n");
		scanf_s("%d", &z);
		arr[i] = z;
	}
}