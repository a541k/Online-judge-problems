#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int as=0,b=0,c=0,i,f=0;
    cin>>a;
    for(i=0; i<a.length(); i++)
    {
        if(a[0]=='a'&&a[a.length()-1]=='c')
        {
            f=1;
            if(a[i]=='a')
                as++;
            if(a[i]=='b')
                b++;
            if(a[i]=='c')
                c++;
        }

        if(i<a.length()-1 && (a[i]=='b'||a[i]=='c') &&a[i+1]=='a')
        {
            cout<<"NO";
            return 0;
        }
        if(i<a.length()-1 && a[i]=='c' &&a[i+1]=='b')
        {
            cout<<"NO";
            return 0;
        }
        if(i<a.length()-1 && a[i]=='a' &&a[i+1]=='c')
        {
            cout<<"NO";
            return 0;
        }
    }
    if(f==1&&(c==as||c==b))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
