#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,c;
    cin>>n>>c;
    long long a[n],b[c],s=0,i,j;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<c;i++)
        {
            cin>>b[i];
            //s=s+b[c];
        }
        s=a[0];
        j=0;
    for(i=0;i<c;i++)
    {
        if(b[i]<a[0])
            cout<<1<<" "<<b[i]<<endl;
        else if(b[i]<=s)
            cout<<j+1<<" "<<-s+a[j]+b[i]<<endl;
        else
        {
            j++;
            for(;j<=n;j++)
            {
                s=s+a[j];
                //cout<<s<<endl;
                if(b[i]<=s)
                {
                    cout<<j+1<<" "<<-s+a[j]+b[i]<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
