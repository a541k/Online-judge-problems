#include<iostream>
using namespace std;
int main()
{
    int n,s,i;
    cin>>n>>s;
    int a[n],c=0,h,m;
    for( i=0; i<n; i++)
    {
        cin>>h>>m;
        a[i]=h*60+m;
    }

    for(i=0; i<n; i++)
    {
        if((a[i]-s)-(c+s+1)>=0)
        {
            cout<<(c+s)/60<<" "<<(c+s)%60;
            return 0;
        }
        c=a[i]+1;
    }
    cout<<(c+s)/60<<" "<<(c+s)%60;
    return 0;
}
