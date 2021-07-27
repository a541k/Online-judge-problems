#include<iostream>
using namespace std;
long long static t;
/*long long lol(long long n)
{
    long long l,c=0;
    for(l=0;l<=1000;l++)
    {
        if(n==l*l)
            c=1;

    }
    if(c=0)
    {
        if(n>t)
            {
                t=n;
                return t;
            }
    }
    //return t;
}*/
main()
{
    long long n,i,j,l,a[1111],c=0;
    cin>>n;
    for(j=0; j<n; j++)
    {
        cin>>a[j];
        //l=lol(a[j]);
        for(l=0; l<=1000; l++)
        {
            if(n==l*l)
                c=1;

        }
        if(c==0)
        {
            if(n>t)
            {
                t=n;
            }
        }
    }
    cout<<;
}
