#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int A, B, sum, differ, total;
	cin >> total;
	for (int i = 0; i < total; i++)
	{
		cin >> sum >> differ;
		A = (sum + differ) / 2;
		B = (sum - differ) / 2;
		if (A >= 0 && B >= 0)
			cout << A << ends << B << endl;
		else
			cout << "impossible" << endl;
	}
}