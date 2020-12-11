#include "truth_table.h"

#include <iostream>
using namespace std;

const int N = 3;

static int b[N];

void truth_table(int k)
{
	// cout << "k : " << k << "\t : " << b[0] << b[1] << b[2] << endl;
	if (k < N)
	{

		b[k] = 0;
		// cout << "up" << endl;
		truth_table(k + 1);
		b[k] = 1;
		// cout << "down" << endl;
		truth_table(k + 1);
	}
	else
	{
		for (int i = 0; i < N; i++)
			cout << (b[i] ? 'T' : 'F') << " ";
		cout << (b[0] || (b[1] && b[2]) ? 'T' : 'F') << endl;
	}
}