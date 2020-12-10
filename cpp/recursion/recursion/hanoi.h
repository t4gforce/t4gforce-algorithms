#pragma once

#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c)
{
	if (n > 0)
	{
		hanoi(n - 1, a, c, b);
		cout << a << "‚©‚ç" << c << "‚Ö‰~”Õ‚ðˆÚ‚·" << endl;
		hanoi(n - 1, b, a, c);
	}
}