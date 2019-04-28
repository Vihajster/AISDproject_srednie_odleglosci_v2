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
		int iter = 0;
		if (d == 2)
		{




			for (size_t x1 = 0; x1 < l; x1++)
			{
				for (size_t x2 = 0; x2 < l; x2++)
				{
					int distanceX = absolute(x2 - x1);
					D += do2(l) * distanceX;
					iter++;
				}
			}
			for (size_t y1 = 0; y1 < l; y1++)
			{
				for (size_t y2 = 0; y2 < l; y2++)
				{
					int distanceY = absolute(y2 - y1);
					D += do2(l) * distanceY;
					iter++;
				}
			}


			D = D / (do2(l) * do2(l) - do2(l));
			cout << D << endl;
			//cout << "iter=" << iter << endl;
		}
	}
}
