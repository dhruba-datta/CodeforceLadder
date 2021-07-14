#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int upper = 0, lower = 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (lower >= upper)
    {
        for (int j = 0; j < s.length(); j++)
        {
            s[j] = tolower(s[j]);
        }
    }
    else
    {
        for (int j = 0; j < s.length(); j++)
        {
            s[j] = toupper(s[j]);
        }
    }
    cout<<s;
    return 0;
}