#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c =0;
    int a = 10;
    cin>>s;
    for(int i=0; i<s.length(); i++)
        if(s[i]=='4'||s[i]=='7') c++;
    stringstream ss;
    ss<<c;
    string sss = ss.str();
    for(int i=0; i<sss.length(); i++)
    {
        if(sss[i]!='4'&&sss[i]!='7')
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
