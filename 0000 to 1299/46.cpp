#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i]<0)
        {
            count = count + a[i];
        }
        
        
    }
    cout << abs(count);

    return 0;
}