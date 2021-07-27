#include<iostream>
#include<string>
using namespace std;
main()
{
    string  a="Danil",b="Olya",c="Slava",d="Ann", e="Nikita",s;
    int f=0,g=0,h=0,i=0,j=0,k,l=0;
    cin>>s;

    for(k=0; k<s.length(); k++)
    {
        if(s.substr(k,5)==a)
        {
            f++;
        }
    }
    for(k=0; k<s.length(); k++)
    {
        if(s.substr(k,4)==b)
        {
            g++;
        }
    }
    for(k=0; k<s.length(); k++)
    {
        if(s.substr(k,5)==c)
        {
            h++;
        }
    }
    for(k=0; k<s.length(); k++)
    {
        if(s.substr(k,3)==d)
        {
            i++;
        }
    }
    for(k=0; k<s.length(); k++)
    {
        if(s.substr(k,6)==e)
        {
            j++;
        }
    }
    if(f==0&&g==1&&h==0&&i==0&&j==0)
        cout<<"YES";
    else if(f==1&&g==0&&h==0&&i==0&&j==0)
        cout<<"YES";
    else if(f==0&&g==0&&h==1&&i==0&&j==0)
        cout<<"YES";
    else if(f==0&&g==0&&h==0&&i==1&&j==0)
        cout<<"YES";
    else if(f==0&&g==0&&h==0&&i==0&&j==1)
        cout<<"YES";
    else
        cout<<"NO";

}
