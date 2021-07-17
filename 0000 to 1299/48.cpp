#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int k, a[12];
    cin >> k;
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    int count = 0, x = 0;
    for (int i = 11; i >= 0; i--)
    {
        // cout<<a[i]<< " ";
        if (count < k)
        {
            count = count + a[i];
            x++;
        }
    }
    if (count < k)
    {
        cout << "-1";
    }
    else
    {
        cout << x;
    }

    return 0;
}