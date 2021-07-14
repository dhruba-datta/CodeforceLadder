#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, x;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinks = (k * l) / nl;
    int limes = (c * d);
    int salt = p/np;
    x = min({drinks, limes, salt});
    cout << x/n ;
    return 0;
}