#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    long long n;
    cin>>n;
    long long a[n],b[n],c[n],i,d=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        d=d+a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=b[i]-a[i];
    }
    if(n==2)
    {
        cout<<"YES";
        return 0;
    }

    sort(c,c+n);
    if(c[n-1]+c[n-2]>=d)
        cout<<"YES";
    else
        cout<<"NO";
}
