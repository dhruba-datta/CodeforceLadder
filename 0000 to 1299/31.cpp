#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, m = 0, count = 0;
    cin >> n;
    int b[5];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        m += a;
    }
    for (int i = 0; i < 5; i++)
    {
        b[i] = m + i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        int p;
        p = b[i] % (n + 1);
        if (p != 1)
        {
            count++;
        }

        // cout<<p<<" ";
    }
    cout << count;

    return 0;
}