#include <iostream>
#include <time.h>
#include "matrix.h"

void m_fill(int a[6][9], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = -50 + rand() % 100;
		}
	}
}
void m_show(int a[6][9], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << a[i][j] << "    ";
		}
		std::cout << std::endl;
	}
}
void m_neg(int a[6][9], int n, int m)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < 0)
				count++;
		}
	}
	std::cout << count << " negative numbers";
}
