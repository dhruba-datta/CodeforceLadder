#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[7], i;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int x = 0, y = 0;
    while (y == 0)
    {
        for (i = 0; i < 7; i++)
        {
            x = x + a[i];

            if (x >= n)
            {
                y = 1;
                break;
            }
        }
    }
    cout << i + 1;
    return 0;
}