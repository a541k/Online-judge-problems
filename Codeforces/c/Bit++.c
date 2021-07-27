#include<stdio.h>
main()
{
    int n,i,j,x=0;
    char a[460];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        if(strcmp(a,"++X")==0||strcmp(a,"X++")==0)
            x=x+1;
        else if(strcmp(a,"--X")==0||strcmp(a,"X--")==0)
            x=x-1;
    }
    printf("%d",x);

}
