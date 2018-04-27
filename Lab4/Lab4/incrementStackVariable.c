#include "stdafx.h"
#include <stdio.h> 
#include "Header.h"

void incrementStackVariable()
{
	int x;
	printf("x = "); scanf("%x", &x);
	printf("%p = %d\n\r", &x, x);
	increment(&x);
	printf("%p = %d\n\r", &x, x);
}