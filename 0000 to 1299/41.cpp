#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n, m, count = 0;
    cin >> n >> m;
    ll a[m];

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll prev = a[0];
    count = prev - 1;
    for (ll i = 1; i < m; i++)
    {
        if (prev > a[i])
        {
            count = count + (n - prev) + a[i];
        }
        else if (prev < a[i])
        {
            count = count + (a[i] - prev);
        }
        prev = a[i];
    }
    cout<< count;

    return 0;
}