#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main()
{
    while(cin>>s)
    {
        int ans=0;
        ans+=s[0]-'a'>13?26-(s[0]-'a'):s[0]-'a';
        for(int i=1;i<s.length();i++)
        {
            ans+=abs(s[i]-s[i-1])>13?26-abs(s[i]-s[i-1]):abs(s[i]-s[i-1]);
        }
        printf("%d\n",ans);
    }
}
