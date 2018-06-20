#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,m,r;
    int z=0,o=0;
    long long int a[200005];
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i=0;i<n;i++)
    {
        if(a[i]==0)
            z++;
        else
            o++;
    }
    if(o<z)
    {
        m=n-2*o;
        cout<<m<<endl;
    }
    else
    {
         r=n-2*z;
        cout<<r<<endl;
    }
 return 0;
}
