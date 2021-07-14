#include <iostream>
using namespace std;

int main()
{
    int n, x,a = 0, b=0, c=0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if(j==0){
                a = a + x;
            }
            else if(j==1){
                b = b +x;
            }
            else{
                c=c+x;
            }
               
                
        }
    }
    // cout<<a;
    if (a == 0 && b==0 && c==0)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}