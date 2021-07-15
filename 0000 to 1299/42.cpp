#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

    string a;
    cin >> a;
    int n = a.length();
    if (a[0] != '1')
    {
        cout << "NO";
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] != '1' && a[i] != '4')
        {
            cout << "NO";
            return 0;
        }
        else if (a[i] == '4' && a[i + 1] == '4' && a[i + 2] == '4')
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}