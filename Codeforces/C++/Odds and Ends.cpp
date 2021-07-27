#include<iostream>
using namespace std;
main()
{
    int n,i,c=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1 )
        {
            c++;
        for(j=i+2;j<n;j+=2)
        {
            if(a[j]%2==1 )
                c++;
        }
        }
    }
    if(c%2==1)
        cout<<"Yes "<<c;
    else
        cout<<"No "<<c;
}
