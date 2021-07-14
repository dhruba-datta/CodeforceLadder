#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, count = 0, max = 0;
    cin >> n;
    int a[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a[i] >> a[i + 1];
        x = a[i];
        y = a[i + 1];
        count = count + y - x;
        if (max < count)
        {
            max = count;
        }
        i++;
    }
    cout << max;

    return 0;
}