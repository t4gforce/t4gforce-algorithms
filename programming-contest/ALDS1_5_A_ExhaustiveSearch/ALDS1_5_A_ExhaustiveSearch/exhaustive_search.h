#pragma once


// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=ja
// 長さ n の数列 A と整数 m に対して、A の要素の中のいくつかの要素を足しあわせて
// m が作れるかどうかを判定するプログラムを作成してください。A の各要素は１度だけ使うことができます。
// 数列 A が与えられたうえで、質問として q 個の mi が与えれるので、
// それぞれについて "yes" または "no" と出力してください。
int exhaustive_search(int i, int m);