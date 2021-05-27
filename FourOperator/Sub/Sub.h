#ifndef _SUB_H_
#define _SUB_H_

#ifdef DLL_EX
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif // !DLL_EX

#ifdef __cplusplus
extern "C" {
#endif 

DLL_API int Sub(int a, int b);

#ifdef __cplusplus
}
#endif 

#endif // !_SUB_H_
