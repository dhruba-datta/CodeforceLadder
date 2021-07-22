#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n, m, z;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    z = abs(a[0] - a[n - 1]);
    for (int i = 0; i <= abs(m - n); i++)
    {
        int x;
        x = abs(a[i] - a[i + n - 1]);
        if (x < z)
        {
            z = x;
        }
    }
    cout << z;

    return 0;
}