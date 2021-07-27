#include<iostream>
using namespace std;
main()
{
    int n,m,c=0,i,j=1;
    cin>>n>>m;
    for(i=1;;)
    {
        if(m<i)
            break;
        m=m-i;
        i++;
        if(i>n)
            i=1;
    }
    cout<<m;
}
