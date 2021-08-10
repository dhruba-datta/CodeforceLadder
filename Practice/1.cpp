//Author: Debopriya Deb Roy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> v;
        float res = 0;
        for(int j = 0; j<n; j++){
            cin >> v[j];
        }
        sort(v.begin(),v.end());
        for(int i = 0; i <(n-2); i++){
            res += v[i];
        }
        res/= (n-2);
        res += v[n-1];
        
        cout << res << endl;
    }

    return 0;
}