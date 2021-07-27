#include<stdio.h>
main()
{
    int j,a,b,s[3];
    scanf("%d",&a);
    for(j=0;j<4;j++)
        {
             if(a>=10)
                s[j]=a%10;
            else
                s[j]=a;
                a=a/10;
            printf("%d\n",s[j]);
        }
}
