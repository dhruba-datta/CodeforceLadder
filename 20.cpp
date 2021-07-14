#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    int a = 0, b = 0, c = 0, i = 0;

    if (s.length() == 1)
    {
        cout << s;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            a++;
        }
        else if (s[i] == '2')
        {
            b++;
        }
        else if (s[i] == '3')
        {
            c++;
        }
    }
    if (a != 0 && b != 0 && c != 0)
    {
        t = "1";
        for (int i = 0; i < a - 1; i++)
        {
            t = t + "+1";
        }
        for (int i = 0; i < b; i++)
        {
            t = t + "+2";
        }
        for (int i = 0; i < c; i++)
        {
            t = t + "+3";
        }
        cout << t;
    }

    else if (a == 0 && b != 0 && c != 0)
    {
        t = "2";

        for (int i = 0; i < b - 1; i++)
        {
            t = t + "+2";
        }
        for (int i = 0; i < c; i++)
        {
            t = t + "+3";
        }
        cout << t;
    }
    else if (a != 0 && b == 0 && c != 0)
    {
        t = "1";

        for (int i = 0; i < a - 1; i++)
        {
            t = t + "+1";
        }
        for (int i = 0; i < c; i++)
        {
            t = t + "+3";
        }
        cout << t;
    }
    else if (a != 0 && b != 0 && c == 0)
    {
        t = "1";

        for (int i = 0; i < a - 1; i++)
        {
            t = t + "+1";
        }
        for (int i = 0; i < b; i++)
        {
            t = t + "+2";
        }
        cout << t;
    }
    else if (a > 1 && b == 0 && c == 0)
    {
        t = "1";

        for (int i = 0; i < a - 1; i++)
        {
            t = t + "+1";
        }

        cout << t;
    }
    else if (b > 1 && a == 0 && c == 0)
    {
        t = "2";

        for (int i = 0; i < b - 1; i++)
        {
            t = t + "+2";
        }

        cout << t;
    }
    else if (c > 1 && a == 0 && b == 0)
    {
        t = "3";

        for (int i = 0; i < c - 1; i++)
        {
            t = t + "+3";
        }

        cout << t;
    }

    return 0;
}