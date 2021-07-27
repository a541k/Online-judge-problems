#include<iostream>
using namespace std;
main()
{
    long long a,b,i;
    cin>>a>>b;
    if(b-a==2 && a%2==1)
        cout<<3;
    else if(a==b)
        cout<<a;
    else
        cout<<2;



}
