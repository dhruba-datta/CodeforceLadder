#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, a, b, c, x;
    cin >> s1 >> s2 >> s3;
    a = sqrt((s1 * s3) / s2);
    b = sqrt((s1 * s2) / s3);
    c = sqrt((s3 * s2) / s1);
    cout<<4*(a+b+c);
    return 0;
}