#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int n,i,j,d=0;
    cin>>n;
    int a[n-1];

    string s;
        cin>>s;
    char b[2],c[2];
    for(i=0;i<n;i++)
        a[i]=1;

    for(i=0; i<n-1; i++)
    {
        b[0]=s[i];
        b[1]=s[i+1];
        for(j=i+1; j<n-1; j++)
        {
            c[0]=s[j];
            c[1]=s[j+1];
            if(b[0]==c[0]&&b[1]==c[1])
            {
                a[i]++;
            }

        }
    }
    for(i=0;i<n;i++)
    {

        for(j=1;j<n;j++)
        {
           if(a[i]>=a[j])
               d++;
        }
        if(d==n-1)
        {
            cout<<s[i]<<s[i+1];
            return 0;
        }
        else
            d=0;
    }

    return 0;
}
