#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int count = 0;
	string input;
	while(getline(cin, input) && !cin.eof())
	{
		string tar = "\"", rep1 = "``", rep2 = "\'\'";
		int pos = 0, i;
		while ((i = input.find(tar, pos)) != string::npos)
		{
			if (count % 2 == 0)
			{
				input.replace(i, 1, rep1);
				pos = i + rep1.size();
			}
			if (count % 2 == 1)
			{
				input.replace(i, 1, rep2);
				pos = i + rep2.size();
			}
			count++;
		}
		cout << input << endl;
	}
}