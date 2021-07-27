#include<iostream>
using namespace std;
main()
{
    long long t,s,x,i=0,p=0;
    cin>>t>>s>>x;
    if(x<t)
    {
        cout<<"NO";
        return 0;
    }
    if(x==t)
    {
        cout<<"YES";
        return 0;
    }
    x=x-t;
    if(x%s==0|| x%s-1==0 &&x>1)
    {
        cout<<"YES";
        return 0;
    }
        cout<<"NO";
}
