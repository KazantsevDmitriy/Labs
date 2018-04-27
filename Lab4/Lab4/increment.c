#include "stdafx.h"
#include <stdio.h>
#include "Header.h"
void increment(int *n)
{
	if (!n) return 0;
	printf("%p = %d\n\r", n, *n);
	(*n)++;
	printf("%p = %d\n\r", n, *n);
}