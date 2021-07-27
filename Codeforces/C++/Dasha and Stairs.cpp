#include<iostream>
using namespace std;
main()
{
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0)
        {
            cout<<"NO";
            return 0;
        }

    if(a==b||a+1==b||b+1==a)
        cout<<"YES";
    else
        cout<<"NO";
}
