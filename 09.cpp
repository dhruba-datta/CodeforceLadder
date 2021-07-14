#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b = 0;
    cin >> n;
    // b = n / 10; //except last
    // a = n % 10; //last digit
    while (n > 1)
    {
        a = n % 10;
        if (a == 4 || a == 7)
        {
            b++;
        }
        n = n / 10;
        // cout << "value of a" << a << endl;
    }
    // cout << b << endl;

    if (b == 4 or b == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}