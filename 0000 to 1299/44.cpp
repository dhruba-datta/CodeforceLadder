#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n, x = 1, y = 0;
    cin >> n;
    string a, b;

    cin >> a;

    if (n == 1)
    {
        cout << a;
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        string c;
        cin >> c;
        if (c == a)
        {
            x++;
        }
        else
        {
            b = c;
            y++;
        }
    }

    if (x > y)
        cout << a;
    else
        cout << b;

    return 0;
}