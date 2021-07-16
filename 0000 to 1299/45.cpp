#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int i, j, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for (i = 0; i < m; i++)
        cin >> b[i];
    int max = INT_MIN, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int x = b[j] / a[i];
            if (a[i] * x == b[j])
            {
                if (x == max)
                    count++;
                if (x > max)
                {
                    max = x;
                    count = 1;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}