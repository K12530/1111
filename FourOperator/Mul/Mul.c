#include <stdio.h>
#include "Mul.h"

int Mul(int a, int b)
{
	if ((a % 10000) * (b % 10000) != (a * b) % 10000)
	{
		printf("������\r\n");
		return 0;
	}
	return a * b;
}