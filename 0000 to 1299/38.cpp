#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n, x;
    cin >> n;
    vector<pair<ll, ll>> a;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        a.push_back(make_pair(x, i));
    }
    sort(a.begin(), a.end());
    if (a[0].first == a[1].first)
    {
        cout << "Still Rozdil";
    }
    else
    {
        cout << a[0].second << endl;
    }

    return 0;
}