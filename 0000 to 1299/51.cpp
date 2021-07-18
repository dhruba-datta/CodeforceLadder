#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = n - max(a + 1, n - b) + 1;
    cout << x;
    return 0;
}