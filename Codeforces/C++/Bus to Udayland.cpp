#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,i,c,d,j,f=0;
    cin>>n;
    char a[n][5];
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
        if(a[i][0]=='O'&&a[i][1]=='O'||a[i][3]=='O'&&a[i][4]=='O')
        {
            if(a[i][0]=='O'&&a[i][1]=='O'&& f==0)
            {
                f=1;
                a[i][0]='+';
                a[i][1]='+';
            }
            else if(a[i][3]=='O'&&a[i][4]=='O'&& f==0)
            {
                a[i][3]='+';
                a[i][4]='+';
            }
            f=1;

        }
    }
    if(f==1)
    {
      cout<<"YES"<<endl;

     for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    }
    else
        cout<<"NO";
}
