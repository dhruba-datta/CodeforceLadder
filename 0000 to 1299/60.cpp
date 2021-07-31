#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "B";
                }
                else
                {
                    cout << "W";
                }
            }
            else
            {
                cout << "-";
            }
        }
        cout<<endl;
    }

    return 0;
}