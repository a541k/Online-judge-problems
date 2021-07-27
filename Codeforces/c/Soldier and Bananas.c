#include<stdio.h>
main()
{
    int k,n,w,s=0,i;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        s=s+i*k;
    }
    if(s-n>0)
        printf("%d",s-n);
    else
        printf("0");
}
