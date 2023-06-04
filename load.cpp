#include "load.h"
#include <iostream>
#include "array.h"
#include "matrix.h"
#include <Windows.h>

void LoadArray(const char* const s, const char* name, int* a, int n)
{
	void* lib;
	void(*fun)(int* a, int n);
	lib = LoadLibrary(s);
	if (!lib)
	{
		std::cout << "Can't load library " << s;
	}
	else
	{
		fun = (void(*)(int* a, int n))GetProcAddress((HINSTANCE)lib, name);
		if (fun == NULL)
		{
			std::cout << "Error loading functions!" << std::endl;
		}
		fun(a, n);
	}
}

void LoadMatrix(const char* const s, const char* name, int a[6][9], int n, int m)
{
	void* lib;
	void(*fun)(int a[6][9], int n, int m);
	lib = LoadLibrary(s);
	if (!lib)
	{
		std::cout << "Can't load library " << s;
	}
	else
	{
		fun = (void(*)(int a[6][9], int n, int m))GetProcAddress((HINSTANCE)lib, name);
		if (fun == NULL)
		{
			std::cout << "Error loading functions!" << std::endl;
		}
		fun(a, n, m);
	}
}
