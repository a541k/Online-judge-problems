#include<stdio.h>
main()
{
    int n,m,p;
    scanf("%d %d",&n,&m);
    if(n<m)
        p=n;
    else
        p=m;
    if(p%2==0)
        printf("Malvika");
    else
        printf("Akshat");

}
