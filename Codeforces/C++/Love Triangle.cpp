#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],i,j,k,p=0,l;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        for(j=a[i]-1;;)
        {
            for(k=a[j]-1;;)
            {
                for(l=a[k]-1;;)
                {
                    if(a[l]==j+1)
                    {
                        cout<<"YES";
                        p=1;
                    }
                    break;
                }
                break;
            }
            break;
        }
        if(p==1)
            break;
    }
    if(p==0)
        cout<<"NO";
}
