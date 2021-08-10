#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define vi vector<ll>
#define pb push_back

void solve()
{
    vi a;
    a.pb(4);
    a.pb(5);
    a.pb(6);
    a.pb(1);
    sort(a.begin(),a.end());
    for (int i = 0; i < a.size(); i++)
    {
       cout<<a[i]<<" ";
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}