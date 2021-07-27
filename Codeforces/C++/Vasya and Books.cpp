#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0,t,a[n];
    bool b[n];
    memset(b,false,n*sizeof(b[0]));
    queue<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        s.push(t);
    }
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        c=0;
        while(!b[a[i]-1])
        {
            b[s.front()-1]=true;
            s.pop();
            c++;
        }
        cout<<c<<" ";
    }
    return 0;
}
