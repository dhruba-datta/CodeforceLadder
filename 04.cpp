#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "0", b = "1", c = "2", t , s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            t = t + a;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            t = t + b;
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            t = t + c;
            i++;
        }
    }
    cout << t;
    return 0;
}