#include <iostream>
#include "load.h"
#include <locale.h>
#include <Windows.h>

#define N 42
#define M 6
#define O 9

int main()
{
	int menu;
	char* locale = setlocale(LC_ALL, "");
	int D[N], A[M][O];
	std::cout << "Choose a library: " << std::endl << "1) array" << std::endl << "2) matrix" << std::endl << std::endl;
	std::cin >> menu;
	system("cls");
	if (menu == 1)
	{
		LoadArray("array.dll", "fill", D, N);
		LoadArray("array.dll", "show", D, N);
		LoadArray("array.dll", "neg", D, N);
	}
	else
	{
		LoadMatrix("matrix.dll", "m_fill", A, M, O);
		LoadMatrix("matrix.dll", "m_show", A, M, O);
		LoadMatrix("matrix.dll", "m_neg", A, M, O);
	}
}
