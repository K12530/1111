#include "Add.h"

int Add(int a, int b)
{
	if ((a > 0 && b > 0 && a + b <= 0) || (a < 0 && b < 0 && a + b >= 0))
	{
		printf("������\r\n");
		return 0;
	}
	return a + b;
}
