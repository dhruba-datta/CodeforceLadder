#include <iostream>
#include <string> //for finding length
using namespace std;

int main()
{

    int x[5][5]={},y=0,m=0,n=0,a=0,b=0;

    for (int i = 0; i < 5; i++)
    {
         for (int j = 0; j < 5; j++)
         {
             cin>>x[i][j];

         }

    }
    for (int i = 0; i < 5; i++)
    {
         for (int j = 0; j < 5; j++)
         {


             if(x[i][j]==1)
             {
                 m=i;
                 n=j;
             }

         }


    }


    if(m>1)
    {
        a=m-2;
    }
    else
    {
        a=2-m;
    }

    if(n>1)
    {
        b=n-2;
    }
    else
    {
        b=2-n;
    }

    y=a+b;



    cout<<y;
}