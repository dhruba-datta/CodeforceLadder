#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    if (c.compare(d) == 0)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}