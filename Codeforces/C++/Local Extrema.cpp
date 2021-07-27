#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],c=0,i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i]<a[i-1]&&a[i]<a[i+1])
            c++;
        else if(a[i]>a[i-1]&&a[i]>a[i+1])
            c++;
    }
    cout<<c;
}
