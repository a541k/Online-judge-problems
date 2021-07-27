#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,m,i,j;
    cin>>n>>m;
    string a;
    cin>>a;
    int x,y;
    char c1,c2;
    for(i=1;i<=m;i++)
    {
        cin>>x>>y>>c1>>c2;
        for(j=x-1;j<=y-1;j++)
        {
            if(a[j]==c1)
            a[j]=c2;
        }
    }
    cout<<a;
}
