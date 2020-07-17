#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	int line, max = 0;
	string str;
	vector <int> count(27, 0);
	cin >> line; cin.get();
	for (short i = 0; i < line; i++)
	{
		getline(cin, str);
		for (string::size_type j = 0; j != str.size(); j++)
		{
			if (isalpha(str[j]))
			{
				count[toupper(str[j]) - 'A']++;
				if (count[toupper(str[j]) - 'A'] > max)
					max = count[toupper(str[j]) - 'A'];
			}
		}
	}
	do
	{
		for (short i = 0; i < 26; i++)
			if (count[i] == max)
				cout << (char)(i + 'A') << " " << count[i] << endl;
	} while (--max);
}