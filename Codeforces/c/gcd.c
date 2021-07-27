#include<stdio.h>
main()
{
    int a,b,i,j,k,g=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        j=b;
        k=a;
    }
    else{
        j=a;
        k=b;}
    for(i=j;i>1;i--)
    {
        if(j%i==0 && k%i==0)
            {g=i;
        break;}
    }
    if(g==0)
        g=1;
    printf("%d",g);

}
