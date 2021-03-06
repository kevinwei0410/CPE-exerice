#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	while (!cin.eof())
	{
		string input1, input2;
		cin >> input1 >> input2;
		vector <char> vec1, vec2, vec3(16);
		for (string::size_type i = 0; i < input1.size(); i++)
			vec1.push_back(input1[i]);
		for (string::size_type i = 0; i < input2.size(); i++)
			vec2.push_back(input2[i]);
		sort(vec1.begin(), vec1.end());
		sort(vec2.begin(), vec2.end());
		auto it = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
		vec3.resize(it - vec3.begin());
		for (vector<char>::const_iterator it = vec3.begin(); it != vec3.end(); it++)
			cout << *it;
		cout << endl;
	}
}