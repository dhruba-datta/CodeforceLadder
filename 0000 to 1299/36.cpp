#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1[100], a, n, m = 1000, x = 0, y = 0, curr, prev;
    cin >> n >> a1[1];
    prev = a1[1];
    for (int i = 2; i <= n; i++)
    {
        cin >> a1[i];
        curr = a1[i];
        int diff = abs(curr - prev);
        if (diff < m)
        {
            m = diff;
            x = i-1;
            y = i;
        }
        prev = a1[i];
    }
    a = abs(a1[1] - a1[n]);
    if (a < m)
    {
        x = 1;
        y = n;
    }
    cout << x << " " << y;

    return 0;
}