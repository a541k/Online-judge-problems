#include<stdio.h>
main()
{
    int i,j=0,n,b,s[3];
    scanf("%d",&n);
    i=1;
    while(i>0)
            {
                s[j]=i%10;
            i=i/10;
            j++;
            printf("%d",s[j]);
            }
}
