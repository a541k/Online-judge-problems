#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int i,tap[k],c=0,j,time=0;
        bool b[n];
        memset(b,false,n*sizeof(b[0]));
        for(i=0; i<k; i++) cin>>tap[i];
        for(i=0; c!=n; i++)
        {
            for(j=0; j<k; j++)
            {
                if(tap[j]-1-i>-1&&!b[tap[j]-1-i])
                {
                    b[tap[j]-1-i]=true;
                    c++;
                }
                if(tap[j]-1+i<n&&!b[tap[j]-1+i])
                {
                    b[tap[j]-1+i]=true;
                    c++;
                }
            }
            ++time;
        }
        cout<<time<<endl;
    }
    return 0;
}
