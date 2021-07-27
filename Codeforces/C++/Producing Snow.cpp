#include<iostream>
using namespace std;
main()
{
    int n,i,j;
    cin>>n;
    long long t[n],v[n],r[n];
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        r[i]=0;
    }
    for(i=0; i<n; i++)
    {
        cin>>t[i];
    }
    for(i=0; i<n; i++)
    {

        for(j=0; j<i; j++)
        {
            if(v[j]>t[i])
            {
                r[i]=r[i]+t[i];
                if(t[i]>=v[j])
                    v[j]=0;
                else
                    v[j]=v[j]-t[i];
            }
            else
            {
                r[i]=r[i]+v[j];
                if(t[i]>=v[j])
                    v[j]=0;
                else
                    v[j]=v[j]-t[i];
            }
        }
        if(v[i]>t[i])
            {
                r[i]=r[i]+t[i];
                if(t[i]>=v[i])
                    v[i]=0;
                else
                    v[i]=v[i]-t[i];
            }
        else
            {
                r[i]=r[i]+v[i];
                if(t[i]>=v[i])
                    v[i]=0;
                else
                    v[i]=v[i]-t[i];
            }
    }
    for(i=0; i<n; i++)
        cout<<r[i]<<" ";
}
