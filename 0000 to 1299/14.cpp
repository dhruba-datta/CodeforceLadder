#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, y = 0, count;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0], max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
    // cout << max << " " << min << endl;
    int size = n - 1;
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " ";
        if (a[i] == max)
        {
            x = i;
            break;
        }
    }

    for (int j = size; j >= 0; j--)
    {
        // cout << a[j] << " ";
        if (a[j] == min)
        {
            y = j;
            break;
        }
    }

    if (x < y)
    {
        count = x + ((n - 1) - y);
    }
    else
    {
        count = x + ((n - 1) - y - 1);
    }

    // cout << x << " " << y;
    cout << count;

    return 0;
}