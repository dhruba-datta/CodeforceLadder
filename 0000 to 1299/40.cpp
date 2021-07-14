#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int five = 0, zero = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 5)
            five++;
        else
            zero++;
    }

    if (zero >= 1 && five >= 9)
    {
        int uf = (five / 9) * 9;
        for (int i = 0; i < uf; i++)
        {
            ans += "5";
        }
        for (int i = 0; i < zero; i++)
        {
            ans += "0";
        }
    }
    else if (zero >= 1)
        ans = "0";
    else
        ans = "-1";

    cout << ans;
    return 0;
}
