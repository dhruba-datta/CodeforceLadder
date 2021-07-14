#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    float a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        a = a + m;
    }
    a = a / n;
    cout << a;
    return 0;
}