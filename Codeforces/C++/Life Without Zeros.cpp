#include<iostream>
using namespace std;
main()
{
    long long n,a,b,i=0,j,c=0,d=0,t,e=0,p=0,q=0,r=0;
    cin>>a>>b;
    j=a+b;

    while(a>0)
    {
        t=a%10;
        a=a/10;
        if(t!=0)
            c=10*c+t;
    }
    while(c>0)
    {
        t=c%10;
        c=c/10;
        p=10*p+t;
    }
    while(b>0)
    {
        t=b%10;
        b=b/10;
        if(t!=0)
            d=10*d+t;
    }
    while(d>0)
    {
        t=d%10;
        d=d/10;
        q=10*q+t;
    }
    while(j>0)
    {
        t=j%10;
        j=j/10;
        if(t!=0)
            e=10*e+t;
    }
    while(e>0)
    {
        t=e%10;
        e=e/10;
        r=10*r+t;
    }
    //cout<<p<<endl<<q<<endl<<r<<endl;
    if(r==p+q)
        cout<<"YES";
    else
        cout<<"NO";

}
