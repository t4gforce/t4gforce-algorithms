#include "exhaustive_search.h"
#include <iostream>
using namespace std;

int main()
{
    const int q = 4;
    int m[q] = { 2, 4, 17, 8 };

    for (int i = 0; i < q; i++)
    {
        if (exhaustive_search(0, m[i]))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}