#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110],b[110];
    int i,l,c;
    gets(a);
    gets(b);
    l=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        if(isupper(a[i]))
            a[i]=tolower(a[i]);
         if(isupper(b[i]))
            b[i]=tolower(b[i]);
         if(a[i]==b[i])
            c=0;
         else if(b[i]>a[i])
         {
             c=-1;
             break;
         }
         else if(b[i]<a[i])
         {
             c=1;
             break;
         }

    }
    printf("%d",c);
}
