#include<iostream>
using namespace std;
main()
{
    int n,t;
    cin>>n>>t;
    int a[n],i,d=0,s=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    while(s<t)
    {
        d++;
        s=s+86400-a[i];
        i++;
    }
    cout<<d;
}
