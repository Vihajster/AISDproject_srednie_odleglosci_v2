#include <iostream>
#include "Functions.h"
#include <math.h>       /* pow */
using namespace std;


int main()
{
	int num_of_consecutive_lines;
	int dimensions;
	int length;
	int edges_paired;
	int kings_type;

	cin >> num_of_consecutive_lines;

	for (int i = 0; i < num_of_consecutive_lines; i++)
	{
		double D = 0;
		cin >> dimensions >> length >> edges_paired >> kings_type;
		int iter = 0;

		if (edges_paired == 0)
		{
			D = 2 * pow(length, 2) * sumOfDisstancesInARow(length);
		}
		else if (edges_paired ==1)
		{
			D = pow(length, 2) * sumOfDisstancesInARow(length);
			D += pow(length, 2) * sumOfDisstancesInALoop(length);
		}
		else if (edges_paired == 2)
		{
			D = 2 * pow(length, 2) * sumOfDisstancesInALoop(length);
		}



		D = D / (pow(length, 4) - pow(length, 2));
		cout << (int)D << endl;
		//cout << "iter=" << iter << endl;
	}

}
