#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    
    string a, b = "hello";
    cin >> a;
    int n = a.length();
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[x])
        {
            x++;
            y++;
        }
    }

    if (y==5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}