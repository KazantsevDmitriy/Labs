#include "stdafx.h"
#include <stdio.h>
#include "Header.h"
void sortStackArray()
{
	int len = 10;
	int arr[10];
	printf("N = %d\n\r", len);
	readArray(arr, len);
	writeArray(arr, len);
	printf("\nSorted array:\n");
	sort(arr, len);
	writeArray(arr, len);
}