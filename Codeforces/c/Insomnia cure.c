#include<stdio.h>
main()
{
    int k,l,m,n,d,c=0,i;
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    for(i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            c++;
    }
    printf("%d",c);
}
