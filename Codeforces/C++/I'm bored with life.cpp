#include<iostream>
using namespace std;
main()
{
    long long a,b,m,i,f=1;
    cin>>a>>b;
    if(a>b) m=b;
    else m=a;
    for(i=1;i<=m;i++)
        f=f*i;
    cout<<f;

}
