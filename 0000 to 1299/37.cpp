#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n, k, x = 1, j;
    cin >> n >> k;

    ll a[n + 1];

    if (n % 2 == 0)
    {
        j = n / 2;
    }
    else
    {
        j = n / 2 + 1;
    }
    if (k <= j)
    {
        x = k * 2 - 1;
    }
    else
    {
        x = abs(k - j) * 2;
    }


    cout << x;

    return 0;
}