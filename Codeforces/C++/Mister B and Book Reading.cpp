#include<iostream>
using namespace std;
main()
{
    int v0,v1,c,l,a,i,p=0,n=1;
    cin>>c>>v0>>v1>>a>>l;
    i=v0;p=v0;
    while(p<c && c>v0)
    {
        n++;
        if(i<=v1-a)
            i=i+a;
        else
            i=v1;
        p=p+i-l;// cout<<p<<"\n";
    }
    cout<<n;
}
