#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],s=0,i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        s=s+(a[n-1]-a[i]);
    }
    cout<<s;
}
