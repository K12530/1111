#include "Add.h"

#define INT_MAX 2147483647
#define INT_MIN -2147483647

int Add(int a, int b)
{
	if ((a > INT_MAX) || (a < INT_MIN) || (b > INT_MAX) || (b < INT_MIN))
	{
		printf("输入溢出\r\n");
		return 0;
	}
	if ((a > 0 && b > 0 && a + b <= 0) || (a < 0 && b < 0 && a + b >= 0))
	{
		printf("输出溢出\r\n");
		return 0;
	}
	return a + b;
}
