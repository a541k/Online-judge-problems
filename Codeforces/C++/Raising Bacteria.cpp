#include<iostream>
using namespace std;
main()
{
    long long x,c=1,b=1;
    cin>>x;
    while(1)
    {
        b=2*b;
        cout<<536870911%29;
        if(b==x)//536870911
        {
            cout<<c;
            break;
        }
        if(b>x)
        {
            cout<<c+x-b/2;
            break;
        }
    }
}
