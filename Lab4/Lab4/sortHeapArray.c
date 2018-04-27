#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
void sortHeapArray()
{
	int len = 0;
	printf("N = "); scanf("%d", &len);
	int *arr = (int *)malloc(sizeof(int)*len);
	readArray(arr, len);
	writeArray(arr, len);
	printf("\nSorted array:\n");
	sort(arr, len);
	writeArray(arr, len);
	free(arr);
}