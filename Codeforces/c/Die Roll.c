#include<stdio.h>
main()
{
    int y,w,j,i,k,n,c=0;
    scanf("%d%d",&y,&w);
    if(y>w)
        n=y;
    else
        n=w;
    for(i=n;i<=6;i++)
        c++;
    if(6%c==0)
        printf("%d/%d",c/c,6/c);
    else if(c%2==0) printf("%d/%d",c/2,6/2);
    else
        printf("%d/%d",c,6);
}
