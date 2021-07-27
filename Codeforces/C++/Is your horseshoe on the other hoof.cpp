#include<iostream>
using namespace std;
main()
{
    double p,q,r,s,c=0;
    int i,j;
    cin>>p>>q>>r>>s;
    for(i=1;i<4;i++)
    {
        if(p==q)
            {c++;q=1.1;}
        if(p==r)
            {c++;r=1.2;}
        if(p==s)
            {c++;s=1.3;}
        if(q==r)
            {c++;r=1.4;}
        if(q==s)
            {c++;s=1.5;}
        if(r==s)
            {c++;r=1.6;}

    }
    cout<<c;
}
