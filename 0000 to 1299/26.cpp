#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}