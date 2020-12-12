#include "dfs.h"
#include <iostream>
using namespace std;

const int n = 4;
static const int a[n] = { 1, 2, 4, 7 };
const int k = 13;

bool dfs(int i, int sum)
{
	//cout << i << " " << sum << endl;
	if (i >= n) return sum == k;
	
	// a[i] ���g��Ȃ�
	if (dfs(i + 1, sum)) return true;

	// a[i] ���g��
	if (dfs(i + 1, sum + a[i])) return true;

	return false;
}