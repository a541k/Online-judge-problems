#include<iostream>
using namespace std;

main()
{
    int n,i,j,k,f=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                if(a[i]==a[j]+a[k] && j!=k)
                {
                cout<<i+1<<" "<<j+1<<" "<<k+1;
                return 0;
                }
    }
    if(f==0)
        cout<<-1;
}
