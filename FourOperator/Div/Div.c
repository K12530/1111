#include <stdio.h>
#include "Div.h"

#define INT_MAX 2147483647
#define INT_MIN -INT_MAX-1

int main()
{
	printf("%d", Div(2147483648, -1));
	return 0;
}

int Div(int a, int b)
{
	if (b == 0)
	{
		printf("输入除数错误\r\n");
		return 0;
	}
	if ((a == INT_MIN) && (b == -1))
	{
		printf("输出溢出\r\n");
		return 0;
	}
	return a / b;
}

