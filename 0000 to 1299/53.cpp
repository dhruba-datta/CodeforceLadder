#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i')
        {
            cout << '.';
            cout << s[i];
        }
    }

    // cout << s;
    return 0;
}