#include<stdio.h>
main()
{
    int n,k,c=0,i=1,t=0,a=0;
    scanf("%d%d",&n,&k);
    t=240-k;
    while(c+i*5<=t && a<n)
    {
        a++;
        c=c+(i*5);
        //printf("%d ",c);
        i++;
    }
    printf("%d",a);
}
