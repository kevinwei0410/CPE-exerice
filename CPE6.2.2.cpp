#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	vector <int> between;
	cin >> a;
	while (!cin.eof())
	{
		cin >> b;
		between.push_back(abs(b - a));
		a = b;
	}
	sort(between.begin(), between.end());
	if (between[1] == 1 && between.back() == (between.size() - 1))
		cout << "Jolly" << endl;
	else
		cout << "Not jolly" << endl;
}