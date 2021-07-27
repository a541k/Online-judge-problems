#include<iostream>
using namespace std;
main()
{
    long int n,i,bl,t,l;
    cin>>n;
    t=n;
    if(n<0)
    {
       l=t%10;
       //cout<<l<<"\n";
        t=t/10;
        bl=t%10;
        //cout<<bl<<"\n";
        t=t/10;
        if(bl<l)
            n=t*10+l;
        else
            n=n/10;

    }
    cout<<n;
}
