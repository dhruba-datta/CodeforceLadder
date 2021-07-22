#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        
        //     cout << "map ";
        //     cout << a[i].first << " " << a[i].second << "\n";
        if (a[i].first < s)
        {
            s += a[i].second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}