#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void incrementHeapVariable()
{
	int *x = (int *)malloc(sizeof(int));
	printf("x = "); scanf("%d", x);
	printf("%p = %d\n\r", x, *x);
	increment(x);
	printf("%p = %d\n\r", x, *x);
	free(x);
}