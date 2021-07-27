#include<iostream>
using namespace std;
main()
{
    int a,b,c,n,f=0,i;
    cin>>n>>a>>b>>c;
    for(i=1;i<n;)
    {
        if(a<=b)
            {
                if(i==1 || a<=c)
                {f=f+a; i++;}
                if(c<a && i<n)
                {
                    f=f+c;
                    i++;
                }
            }
        else if(a>b)
            {
                if(i==1 || b<=c)
                {f=f+b; i++;}
                if(c<b && i<n)
                {
                    f=f+c;
                    i++;
                }
            }
    }
    cout<<f;
}
