#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace  std;
int main()
{
	int people, tar, total;
	double prob;
	cin >> total;
	do
	{
		cin >> people >> prob >> tar;
		cout << fixed << setprecision(4) << pow((1 - prob), tar - 1)*prob / (1 - pow(1 - prob, people)) << endl;
	} while (--total);
}