#ifndef _SUB_H_
#define _SUB_H_

#ifdef DLL_EX
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif // !DLL_EX

DLL_API int Sub(int a, int b);

#endif // !_SUB_H_
