#include<iostream>
#include<string>
using namespace std;
main()
{
    string a[1001],b[1001],p,q;
    cin>>a[0]>>b[0];
    p=a[0];0
    q=b[0];
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]==a[i-1])
        {
            a[i]=b[i];
            b[i]=b[i-1];
        }
        else if(a[i]==b[i-1])
        {
            b[i]=b[i];
            a[i]=a[i-1];
        }
    }
    //cout<<p<<" "<<q<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
    }

}
