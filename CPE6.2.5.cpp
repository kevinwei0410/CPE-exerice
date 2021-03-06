#include "pch.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int X, temp, sum = 0;
	while (cin >> X && !cin.eof())
	{
		sum = 0;
		vector <int> coef;
		while (cin >> temp && cin.get()!='\n')
			coef.push_back(temp);
		for (int i = coef.size() - 1; i >= 0; i--)
			sum += coef[coef.size() - i - 1] * (i + 1)*pow(X, i);
		cout << sum << endl;
	}
}