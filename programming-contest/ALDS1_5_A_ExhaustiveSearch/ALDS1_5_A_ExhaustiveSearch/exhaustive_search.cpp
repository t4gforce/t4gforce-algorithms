#include "exhaustive_search.h"
#include <iostream>
using namespace std;

// ���͒l�͈ȉ��Ƃ���
static const int N = 5;
static int A[N] = {1, 5, 7, 10, 21};

// i == ���Z���鐔�̃C���f�b�N�X
// m == �ڕW�Ƃ���a����v�f�������Ă����B0�ɂȂ�΂��̐�������
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