#include<iostream>
#include<string>
using namespace std;
main()
{
    int d,n,j,c=0,ar=0,f=0,temp=0,i;
    cin>>n>>d;
    char a[d][n];
    for(i=0; i<d; i++)
    {
        for(j=0; j<n; j++)
            cin>>a[i][j];
    }
    for(i=0; i<d; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]=='0')
                c++;
        }
        if(c>0)
        {
            ar++;
            if(f==0 || ar>temp)
                temp=ar;
            f=1;
        }
        if(f==1 && c==0)
        {
            ar=0;
        }
        c=0;
    }
    cout<<temp;

}
