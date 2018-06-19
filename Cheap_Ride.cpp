#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,m,a,b,a1,a2,q;
   cin>>n>>m>>a>>b;
   if((m*a)<=b)
   {
       a1=a*n;
       cout<<a1<<endl;
   }
   else
   {
       a1=((n/m)*b)+b;
       a2=((n/m)*b)+(n%m)*a;
       q=min(a1,a2);
       cout<<q;
   }
    return 0;
}
