#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,m,f=0;
    string a="#Black&White",b="#Color";
    cin>>n>>m;
    char c[n*m];
    for(int i=0;i<m*n;i++)
    {
        cin>>c[i];
        if(c[i]=='C'|| c[i]=='M'||c[i]=='Y')
        {
            f=1;
        }
    }
    if(f==1)
        cout<<b;
    else
        cout<<a;

}
