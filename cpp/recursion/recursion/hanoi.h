#pragma once

#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c)
{
	if (n > 0)
	{
		hanoi(n - 1, a, c, b);
		cout << a << "����" << c << "�։~�Ղ��ڂ�" << endl;
		hanoi(n - 1, b, a, c);
	}
}