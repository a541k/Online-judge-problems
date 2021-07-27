#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,i,j,s1=0,s2=0,c=0;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='4'||a[i]=='7')
            c++;
    }
    if(c!=n)
        {
            cout<<"NO";
            return 0;
        }

    for(i=0;i<n/2;i++)
        s1=s1+a[i];
    for(i=n/2;i<n;i++)
        s2=s2+a[i];
    if(s1==s2)
        cout<<"YES";
    else
        cout<<"NO";

}
