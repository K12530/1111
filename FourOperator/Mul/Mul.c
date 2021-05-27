#include <stdio.h>
#include "Mul.h"

int Mul(int a, int b)
{
	if ((a > 0 && b < 0 && a * b>0) || (a < 0 && b > 0 && a * b > 0) || (a > 0 && b > 0 && a * b < 0) || (a < 0 && b < 0 && a * b < 0))
	{
		if ((a % 100) * (b % 100) != (a * b) % 100)
		{
			printf("Êä³öÒç³ö\r\n");
			return 0;
		}
	}
	return a * b;
}