#include<iostream>
using namespace std;
main()
{
    int n,m,i,j,c,f=0;
    cin>>n>>m;
    for(i=n+1;i<=m;i++)
    {
        f=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=1;
            }

        }
        if(f==0)
        {c=i; break;}


    }
    //cout<<c;
    if(c==m)
        cout<<"YES";
    else
        cout<<"NO";
}
