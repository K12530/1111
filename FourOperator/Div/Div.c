#include <Windows.h>
#include <stdio.h>
#include "Div.h"
#include "../Add/Add.h"
#include "../Sub/Sub.h"
#include "../Mul/Mul.h"


#pragma comment(lib,"../Debug/Add.lib")
typedef int(*fun)(int, int);

int main()
{
	fun Mul = NULL;

	HINSTANCE hInst = LoadLibrary(TEXT("Mul.dll"));
	if (hInst != NULL)
	{
		Mul = (fun)GetProcAddress(hInst, "Mul");
	}
	else
	{
		printf("动态库加载失败\r\n");
	}

	printf("%d\r\n", Div(10, 5));
	printf("%d\r\n", Add(10, 5));
	printf("%d\r\n", Sub(10, 5));
	printf("%d\r\n", Mul(10, 5));

	if (hInst != NULL)
	{
		FreeLibrary(hInst);
	}

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
