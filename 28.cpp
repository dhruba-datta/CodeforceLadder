#include <iostream>
#include <string> //for finding length
using namespace std;

int main()
{

    int n,count=0;
    cin>> n;

    int a[n][3]={0};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        if( a[i][0]==1 && a[i][1]==1 || a[i][0]==1 && a[i][2]==1 || a[i][1]==1 && a[i][2]==1)
            count++;

    }

    cout<<count;
}