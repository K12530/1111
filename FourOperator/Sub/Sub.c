#include <stdio.h>
#include "Sub.h"

int Sub(int a, int b)
{
	if ((a > b && a - b <= 0) || (a < b && a - b >= 0))
	{
		printf("Êä³öÒç³ö\r\n");
		return 0;
	}

	return a - b;
}