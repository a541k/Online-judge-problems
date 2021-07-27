#include<iostream>
using namespace std;
main()
{
    long n,i,a,b;
    cin>>n;
    int c=n%7;
    if(c==0)
    {
        a=n*2/7;
        b=a;
    }
    else
    {
        if(c==2||c==5)
        {
            a=(n/7)*2+2;
            b=(n/7)*2+0;
        }
        if(c==1)
        {
            a=(n/7)*2+1;
            b=(n/7)*2+0;
        }
        if(c==6)
        {
            a=(n/7)*2+2;
            b=(n/7)*2+1;
        }
        if(c>2 && c<5)
        {
            a=(n/7)*2+2;
            b=(n/7)*2+0;
        }
    }
    cout<<b<<" "<<a;
}

