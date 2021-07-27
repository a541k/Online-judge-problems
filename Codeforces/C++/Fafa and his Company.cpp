#include<iostream>
using namespace std;
main()
{
    long n,i,k,l,m,t=0;
    cin>>n;
    //m=n;
    for(i=1;i<=n;i++)
    {
        m=n-i;
        if(m%i==0 && m!=0)
            t++;
    }
    cout<<t;
}
