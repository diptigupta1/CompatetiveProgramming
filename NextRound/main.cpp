#include <iostream>

using namespace std;

int main()
{
   int n,m,k,a[100],count=0;
   cin>>n>>k;
   for(int i=0;i<n;++i)
   {
       cin>>a[i];
       if(i+1==k)
        m=a[i];

   }
   for(int i=0;i<n;++i)
   {
        if(a[i]>=m && a[i]>0)
            count++;
   }

   cout<<count<<endl;
   return 0;
}
