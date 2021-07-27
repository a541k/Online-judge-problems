#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
main()
{
    int hh,mm,h,d,c,n,b;
    float dp,p,dh;

    cin>>hh>>mm>>h>>d>>c>>n;
    dh=h;
    if(h%n!=0)
        p=(h/n+1)*c;
    else
        p=h/n*c;
    if(hh<20)
        h=((20-hh)*60-mm)*d+h;

    if(h%n!=0)
        dp=.8*(h/n+1)*c;
    else
        dp=.8*(h/n*c);
    if(dp<p||hh>=20)
        cout<<setprecision(4)<<fixed<<dp;
    else
        cout<<setprecision(4)<<fixed<<p;
}
