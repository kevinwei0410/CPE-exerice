#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int total, length, ants, temp;
	cin >> total;
	for (int i = 0; i < total; i++)
	{
		vector <int> vec;
		cin >> length >> ants;
		while (cin >> temp && cin.get() != '\n')
			vec.push_back(temp);
		sort(vec.begin(), vec.end());
		vector<int>::iterator it;
		for (it = vec.begin(); it != vec.end(); it++)
			if ((it + 1) != vec.end() && *(it + 1) > (length/2))
				break;
		if (abs(*it - (length / 2)) > abs(*(it + 1) - (length / 2)))
			cout << length - *(it + 1) << ends;
		else
			cout << length - *it << ends;
		if (length - vec.front() > vec.back())
			cout << length - vec.front() << endl;
		else
			cout << vec.back() << endl;
	}
}