#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j=1,b[50];
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

    for(i=n-1;i>=0;i--)
    {
        if(!a[i])
            continue;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }

        }
    }
    for(i=n-1;i>=0;i--)
        if(a[i])
            j++;
    cout<<j<<endl;
    for(i=0;i<n;i++)
        if(a[i])
        cout<<a[i]<<" ";


    return 0;
}
