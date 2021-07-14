#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x;
    int l, r, l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    cin >> n;
    int a[n * 2];
    for (i = 0; i < n * 2; i++)
    {
        cin >> a[i] >> a[i + 1];
        if (a[i] == 0)
        {
            r0++;
        }
        else
        {
            r1++;
        }
        if (a[i + 1] == 0)
        {
            l0++;
        }
        else
        {
            l1++;
        }
        i++;
    }

    int z = min(l1, l0) + min(r1, r0);
    cout << z;

    return 0;
}