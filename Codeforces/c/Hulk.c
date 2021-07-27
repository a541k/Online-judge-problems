#include<stdio.h>
main()
{
    int i,j,n,l;
    char a[]="I hate that ",b[]="I love that ";
    char c[]="I love it",d[]="I hate it";

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==n && n%2==0)
        {
            printf("%s",c); break;
        }
         if(i==n && n%2!=0)
        {
            printf("%s",d); break;
        }
        if(i%2==0)
            printf("%s",b);
        if(i%2!=0)
            printf("%s",a);
    }
}
