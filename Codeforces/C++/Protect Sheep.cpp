#include<iostream>
#include<string>
using namespace std;
main()
{
    int r,c,i,j,n;
    char a[505][505];
    cin>>r>>c;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            cin>>a[i][j];
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c-1; j++)
        {
            if(a[i][j]=='S'&&a[i][j+1]=='W'||a[i][j]=='W'&&a[i][j+1]=='S')
            {
                cout<<"No";
                return 0;
            }
        }
    }
    for(i=0; i<r-1; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]=='S'&&a[i+1][j]=='W'||a[i][j]=='W'&&a[i+1][j]=='S')
            {
                cout<<"No";
                return 0;
            }
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]=='.')
            {
                a[i][j]='D';
            }
        }
    }
    cout<<"Yes"<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

}
