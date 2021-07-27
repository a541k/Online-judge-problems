#include<iostream>
using namespace std;
main()
{
    int a[1000][1000],b[1000][1000];
    int i,j,n,m,t;

    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           //cout<<a[i][j]<<" ";
           b[j][i]=a[i][j];

        }
        //cout<<endl;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           cout<<b[i][j]<<" ";
           //b[j][i]=a[i][j];

        }
        cout<<endl;
    }
}
