#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.length();

    reverse(s.begin(), s.end());

    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}