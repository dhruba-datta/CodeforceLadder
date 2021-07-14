#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[201], y[201];
    int i, j, k, n, l, r, u, b, count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (i = 0; i < n; i++)
    {
        r = l = u = b = 0;
        for (j = 0; j < n; j++)
        {
            if (x[i] > x[j] && y[i] == y[j])
                r++;
            if (x[i] < x[j] && y[i] == y[j])
                l++;
            if (x[i] == x[j] && y[i] > y[j])
                b++;
            if (x[i] == x[j] && y[i] < y[j])
                u++;
        }
        if (r > 0 && l > 0 && u > 0 && b > 0)
            count++;
    }
    cout << count;
}