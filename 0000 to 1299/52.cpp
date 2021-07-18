#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    // cout<<n;
    if (n > 7)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1' && s[i + 3] == '1' && s[i + 4] == '1' && s[i + 5] == '1' && s[i + 6] == '1')
            {
                cout << "YES";
                return 0;
            }
            else if (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0' && s[i + 3] == '0' && s[i + 4] == '0' && s[i + 5] == '0' && s[i + 6] == '0')
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}