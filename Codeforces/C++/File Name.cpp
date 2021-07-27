#include<iostream>
using namespace std;

int main()
{
    int n,i,j,s=0,x=1;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]!='x')
            continue;
        for(j=i+1; j<n&&a[j]=='x'; j++)
        {
            x++;
            if(x>=3)
                {
                    s++;
                    a[j]='y';
                }
        }
        x=1;
    }
    cout<<s;

    return 0;
}
