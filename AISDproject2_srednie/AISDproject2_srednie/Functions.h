#pragma once
#include <cstdlib>
#include <math.h>       /* pow */
#include <iostream>
using namespace std;

int absolute(int x)
{
	if (x < 0)
		return 0 - x;
	else
		return x;
}

unsigned int sumOfDisstancesInARow(int length)
{
	int sum=0;
	for (size_t x1 = 0; x1 < length; x1++)
	{
		for (size_t x2 = 0; x2 < length; x2++)
		{
			int distanceX = absolute(x2 - x1);
			sum += distanceX;
			cout << distanceX;
		}
	}
	cout << endl;
	return sum;
}

unsigned int sumOfDisstancesInALoop(int length)
{
	int sum;
	if (length%2)
		sum = (length / 2 +1)* length/2;
	else
		sum = pow(length / 2, 2);

	sum *= length;
	cout << sum << endl;;


	return sum;
}


