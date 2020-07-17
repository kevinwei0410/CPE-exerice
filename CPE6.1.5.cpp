#include "pch.h"
#include <iostream>
#include <string>
#define MAX 32
using namespace std;
int main()
{
	int dim = 0, max = 0;
	char input[MAX][MAX] = { '0' };
	while (cin.getline(input[dim], MAX) && !cin.eof())
	{
		if (strlen(input[dim]) > max)
			max = strlen(input[dim]);
		dim++;
	}
	for (int j = 0; j < max; j++)
	{
		for (int i = dim - 1; i >= 0; i--)
			if (input[i][j] != '0')
				cout << input[i][j];
		cout << endl;
	}
}