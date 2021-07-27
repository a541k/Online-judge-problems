#include<iostream>
using namespace std;
main()
{
    int l,b,y=0;
    cin>>l>>b;
    while(l<=b)
    {
        y++;
        l=3*l;
        b=2*b;
    }
    cout<<y;

}
