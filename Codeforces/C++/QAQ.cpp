#include<iostream>
#include<string>
using namespace std;
main()
{
    string s;
    int i,j,k,n=0,a=0,q=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='Q')
        {
           for(j=i+1;j<s.length();j++)
           {
               if(s[j]=='A')
               {
                   for(k=j+1;k<s.length();k++)
                    {
                        if(s[k]=='Q')
                        {
                            n++;
                        }
                    }
               }
           }
        }
    }
    cout<<n;

}
