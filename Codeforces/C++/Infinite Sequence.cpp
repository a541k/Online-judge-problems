#include<iostream>
#include<cmath>
using namespace std;
main()
{
    long long a,b,c,i;
    cin>>a>>b>>c;
    if(b==a)
    {
        cout<<"YES";
        return 0;
    }
    b=b-a;
    if(abs(b)==c && b!=c||c==0)
    {
        cout<<"NO";
        return 0;
    }
    if(b%c==0&& ((b>0&&c>0)||(b<0&&c<0)))
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";



}
