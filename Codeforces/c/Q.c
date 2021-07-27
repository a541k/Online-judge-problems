#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
main()
{
    char a[210];
    int s,d,l,i,j;
    gets(a);
    l=strlen(a);
     d='a'-a[0];
            d=abs(d);
            if(d>13)
                d=26-d;
    s=d;
    for(i=0;i<l;i++)
    {
        if(i==l-1)
            break;

            d=a[i+1]-a[i];
            d=abs(d);
            if(d>13)
                d=26-d;

        s=s+d;
    }
    printf("%d",s);
}
