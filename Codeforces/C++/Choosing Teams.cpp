#include<iostream>
using namespace std;
main()
{
    int n,c=0,i,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(5-a[i]>=k)
            c++;
    }
    cout<<c/3;

}
