#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[m], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + m);
    sort(b, b + m);
    ll mn = 0, mx = 0, i = 0;
    while (n--)
    {
        mn += a[i];
        a[i]--;
        if (a[i] == 0)
            i++;

        mx += b[m - 1];
        b[m - 1]--;
        sort(b, b + m);
    }
    cout << mx << " " << mn;
    return 0;
}