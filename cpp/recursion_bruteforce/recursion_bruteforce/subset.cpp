#include "subset.h"

#include <iostream>
using namespace std;

const int N = 4;
static int b[N];

void subset(int k)
{
	// cout << "k : " << k << "\t : " << b[0] << b[1] << b[2] << b[3] << endl;
	if (k < N)
	{
		for (int i = 0; i < 2; i++)
		{
			b[k] = i; // 0 or 1
			subset(k + 1);
		}
	}
	else
	{
		int initial = 1;
		cout << "{ ";
		for (int i = 0; i < N; i++)
		{
			if (b[i])
			{
				if (initial)
					initial = 0;
				else
					cout << ", ";
				cout << i;
			}
		}
		cout << " }" <<  endl;
	}
}