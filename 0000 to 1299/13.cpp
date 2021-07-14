#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int size = n;
    int a[n], b[n];
    if (n % 2 != 0)
    {
        cout << "-1";
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            a[i] = i + 1;
        }

        for (int i = 0; i < size; i++)
        {
            b[i] = a[i + 1];
            b[i + 1] = a[i];
            i++;
        }
        for (int i = 0; i < size; i++)
        {
            cout << b[i]<<" ";
        }
    }

    return 0;
}