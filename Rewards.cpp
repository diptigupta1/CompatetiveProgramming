#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int c=a1+a2+a3;
    int m=b1+b2+b3;
    n=n-c/5;
    n=n-m/10;
    if(c>5 && c%5>0)
        n--;
    if(m>10 && m%10>0)
        n--;
    if(c<5 && c!=0)
        n--;
    if(m<10 && m!=0)
        n--;
    if(n<0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
