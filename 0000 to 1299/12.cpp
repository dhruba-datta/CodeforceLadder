#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c, d;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {

            c = c + '1';
        }
        else
        {

            c = c + '0';
        }
    }
    cout<<c;

    return 0;
}