#include<stdio.h>
long int fact(long int a);

main()
{
    long int n,k,i,j,l,ans,t,b;
    scanf("%ld",&t);
    for(b=1;b<=t;b++)
    {
    scanf("%ld%ld",&n,&k);

    ans=fact(n)/(fact(k)*fact(n-k));
    printf("Case %ld: %ld\n",b,ans);
    }


}
long int fact(long int a)
{
    long int f=1,u;
    for(u=1;u<=a;u++)
        f=f*u;
    return f;

}
