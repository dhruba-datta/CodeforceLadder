#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> a;
        while (n--)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        ll y = a[a.size() - 1];
        double z = 0, s = 0;
        for (int i = 0; i < a.size() - 1; i++)
        {
            z += a[i];
            s++;
        }

        double p = y + (z / s);
        // printf("%0.9lf\n",p);
        cout <<fixed<< setprecision(9)<< p << endl;
    }

    return 0;
}