#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,i,c=0;
    string a;
    cin>>n>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
            c++;
        if(a[i]=='0' && c!=0||i==n-1)
        {
            cout<<c;
            c=0;
        }
        if(a[i]=='0' && a[i+1]=='0' && c==0)
            cout<<c;
    }
    if(a[n-1]=='0'&&a[n-2]!='0') cout<<"0";
}
