#include <iostream>

using namespace std;

int main()
{
    int n;
   long long int i=0;
    cin>>n;
    while(n)
    {
        n=n&(n-1);
        i++;
    }
    cout<<i;
    return 0;
}
