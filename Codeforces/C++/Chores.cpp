#include<iostream>
using namespace std;
main()
{
    int n,k,x,i,c=0;
    cin>>n>>k>>x;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-k;i++)
        c=c+a[i];
    c=c+k*x;
    cout<<c;

}
