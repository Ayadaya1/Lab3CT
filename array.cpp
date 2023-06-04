#include <iostream>
#include "array.h"
#include <time.h>

void fill(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = -50 + rand() % 100;
	}
}

void show(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void neg(int* a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			count++;
	}
	std::cout << count << " negative numbers";
}
