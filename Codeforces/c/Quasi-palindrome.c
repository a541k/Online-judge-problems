#include<stdio.h>
main()
{
    long long int n,t,l=0;
    int i,j;
    scanf("%lld",&n);
    for(i=0;i<11;i++)
    {
        if(n%10==0)
            n=n/10;
        else break;
    }
    t=n;
    while(t>0)
    {
        l=l*10+t%10;
        t=t/10;
    }
    if(l==n)
        printf("YES");
    else
        printf("NO");
}
