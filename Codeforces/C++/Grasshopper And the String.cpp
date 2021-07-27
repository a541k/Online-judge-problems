#include<iostream>
#include<string>
using namespace std;
main()
{
    string a;
    int i,c=0,t;
    cin>>a;
    for(i=0;i<=a.length();i++)
    {
        c++;
        if(i==1)
            t=c;

        if(a[i]=='A'|| a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'||i==a.length())
        {
            if(t<c)
            {
            t=c;
            }
            c=0;
        }
    }
    cout<<t;
}
