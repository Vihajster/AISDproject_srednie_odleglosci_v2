#include <iostream>
#include "Functions.h"
using namespace std;


int main()
{
	int lkl, d, l, k, h;
	cin >> lkl;

	for (int i = 0; i < lkl; i++)
	{
		unsigned int D = 0;
		cin >> d >> l >> k >> h;

		if (d == 2)
		{
			for (size_t x1 = 0; x1 < l; x1++)
			{
				for (size_t y1 = 0; y1 < l; y1++)
				{
					for (size_t x2 = 0; x2 < l; x2++)
					{
						int distanceX = absolute(x2 - x1);
						for (size_t y2 = 0; y2 < l; y2++)
						{
							int distanceY;
							distanceY =absolute(y2 - y1);
							D += distanceX+distanceY;
							//cout << distance<< endl;
							//cout << D << endl;
						}
					}
				}
			}
		}
		cout << D << endl;
		D = D / (l * l * l * l - l * l);
		cout << D << endl;

	}

}
