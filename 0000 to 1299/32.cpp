#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[100], b, x = 0, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        a[i] = b;
        x = max(x, b);
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << 5%2;
    if (x < m)
    {
        cout << n;
        return 0;
    }
    else
    {
        y = (x / m) + (x % m);
        for (int j = 0; j < y; j++)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] <= m && a[i] != 0)
                {
                    b = i;
                    a[i] = 0;
                }
                else if (a[i] > m)
                {
                    a[i] = a[i] - m;
                }
            }
        }
        cout << b;
    }

    return 0;
}