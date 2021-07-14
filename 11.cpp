#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m, b, i = 0;
    cin >> n >> m;

    while (a[i] != n)
    {
        i++;
    }

    if (a[i] == n && a[i + 1] == m)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}