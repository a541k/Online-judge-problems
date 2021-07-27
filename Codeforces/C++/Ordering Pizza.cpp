#include<iostream>

main()
{
    using namespace std;
    long long s,n;
    cin>>n>>s;
     long long sl[n],a[n],b[n],ta=0,tb=0,i;
    for(i=0;i<n;i++)
        {cin>>sl[i]>>a[i]>>b[i];}
    for(i=0;i<n;i++)
    {
        ta=ta+sl[i]*a[i];
        tb=tb+sl[i]*b[i];
    }
    if(ta>tb)
        cout<<ta;
    else
        cout<<tb;
}
