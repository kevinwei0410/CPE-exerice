#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	long int people, days;
	while (cin >> people >> days && !cin.eof())
	{
		for (int i = people, sum = people; sum < days; ++people, sum += people);
		cout << people << endl;
	}
}