#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t, c1, c2;
    cin >> t;
    vector<ll> a;
    for (int i = 0; i < t; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < t; i++)
    {
        ll x = a[i];
        if (x % 3 == 0)
        {
            c1 = x / 3;
            c2 = c1;
        }
        else if (x % 3 == 1)
        {
            c2 = x / 3;
            c1 = c2 + 1;
        }
        else
        {
            c1 = x / 3;
            c2 = c1 + 1;
        }
        cout << c1 << " " << c2<< "\n";
    }

    return 0;
}