#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int total, lower, upper, sum = 0;
	cin >> total;
	for (int i = 1; i <= total; i++)
	{
		sum = 0;
		cin >> lower >> upper;
		for (int j = lower; j <= upper; j++)
		{
			if (j % 2 == 1)
				sum += j;
		}
		cout << "Case " << i << ": " << sum << endl;
	}
}