#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,i,j,b=2,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n-1;i++)
    {
        if(a[i]==a[0]||a[i]==a[n-1])
            b++;
    }
    if(n-b>=0)
        cout<<n-b;
    else
        cout<<0;
}
