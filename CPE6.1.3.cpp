#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	int sum;
	string input;
	while (cin >> input && input != "0")
	{
		while (input.size() != 1)
		{
			sum = 0;
			for (string::size_type i = 0; i < input.size(); i++)
				sum += (input[i] - '0');
			stringstream ss;
			ss << sum;
			ss >> input;
		}
		cout << input << endl;
	}
}