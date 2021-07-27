#include<iostream>
#include<string>

using namespace std;

main()
{
    long n,i,x=0,p=0,q=0,y=0,t=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='U')
        {
            if(y==0&&x==0)
                q=1;
            y++;
        }
        if(s[i]=='R')
        {
            if(y==0&&x==0)
                p=1;
            x++;
        }
        if(x>y&&q==1)
        {
            t++;
            x=1;
            y=0;
            q=0;
            p=1;
        }
        if(x<y&&p==1)
        {
            t++;
            x=0;
            y=1;
            p=0;
            q=1;
        }
    }
    cout<<t;
}
