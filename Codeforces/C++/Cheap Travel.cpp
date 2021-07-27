#include<iostream>
main()
{
    using namespace std;
    int n,m,a,b,i,s,k;
    cin>>n>>m>>a>>b;
    float t;
    t=(float)b/(float)m;
    if(t<(float)a)
    {
        s=0;
        for(i=m;;i+=m)
        {
            s=s+b;
            if(i>=n-1 || i+m>n-1) break;
        }
        if((n-i)*a>=(n-i)*b && i<=n-1)s=s+b;
        else if((n-i)*a<(n-i)*b && i<=n-1) s=s+(n-i)*a;
    }
    k=n*a;
    if(s>k)  s=k;
    cout<<s;
}
