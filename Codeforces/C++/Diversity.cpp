#include<iostream>
#include<string>
using namespace std;
main()
{
    string s;
    char z='!';
    int n,k,j,c=0;
    cin>>s>>k;
    n=s.length();
    if(n<k)
    {
        cout<<"impossible";
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                c++;
                s[j]=z;
                z++;
            }
        }
    }

    if(n-c>=k)
        cout<<0;
    else
        cout<<k-(n-c);
}
