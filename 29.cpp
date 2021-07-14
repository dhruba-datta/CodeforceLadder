#include <iostream>
#include <string> //for finding length
using namespace std;

int main()
{

    int n,x=0;
    cin>>n;
    string a[200]={};

    for(int i=0;i<n;i++)
    {
        cin>> a[i];
    }


    for(int i=0;i<n;i++)
    {
        if(a[i]== "++X")
            x++;
        else if(a[i]== "X++")
            x++;
        else if(a[i]== "X--")
            x--;
        else if(a[i]== "--X")
            x--;
    }

    cout<<x;

}