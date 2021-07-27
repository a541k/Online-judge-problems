#include<stdio.h>
main()
{
    long long int n,m,a,l,w;
    int i;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a==0)
    {
        l=n/a;
    }
    else if(n%a!=0)
    {
        l=n/a+1;
    }
    if(m%a==0)
        w=m/a;
    else if(m%a!=0)
        w=m/a+1;
    printf("%d",w*l);

}
