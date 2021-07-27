#include<stdio.h>
#include<stdlib.h>
main()
{
    int p,q,r,m,f,l,mid,a,ans;
    scanf("%d%d%d",&p,&q,&r);
    if(p>q && p<r || p>r&& p<q)
    {
        ans=abs(p-q)+abs(p-r);
    }
    else if(q>p && q<r|| q>r && q<p)
    {
        ans=abs(p-q)+abs(q-r);
    }
    else if(r>p && r<q || r>q&& r<p)
    {
        ans=abs(r-q)+abs(p-r);
    }
       printf("%d",ans);
}
