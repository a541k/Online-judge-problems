#include<iostream>
#include<string>
using namespace std;
main()
{
    int i,n,c=0,d=0;
    string p;
    cin>>p>>n;
    string a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==p)
        {
            c=1;d=1;
        }
        if(a[1]==p[0])
       {
            c=1;
       }
        if(a[0]==p[1])
        {
            d=1;
        }
    }
    if(c==1 && d==1)
        cout<<"YES";
    else
        cout<<"NO";
}
