#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3], b[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j >= 1)
            {
                b[i][j - 1] += a[i][j];
            }
            if (j < 2)
            {
                b[i][j + 1] += a[i][j];
            }
            if (i >= 1)
            {
                b[i - 1][j] += a[i][j];
            }
            if (i < 2)
            {
                b[i + 1][j] += a[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (b[i][j] % 2)
            {
                cout << '0';
            }
            else
            {
                cout << '1';
            }
        }
        cout << '\n';
    }
    return 0;
}