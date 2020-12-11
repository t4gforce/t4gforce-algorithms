#include "exhaustive_search.h"
#include <iostream>
using namespace std;

// 入力値は以下とする
static const int N = 5;
static int A[N] = {1, 5, 7, 10, 21};

// i == 加算する数のインデックス
// m == 目標とする和から要素を引いていく。0になればその数を作れる
int exhaustive_search(int i, int m)
{
	//cout << "i : " << i << " m : " << m << endl;
	if (m == 0) return 1;
	if (i >= N) return 0;
	int res = exhaustive_search(i + 1, m);
	if (res)
		return res;
	else
		res = exhaustive_search(i + 1, m - A[i]);
	return res;
}