#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110];
    int i,l,c=0;
    gets(a);
    l=strlen(a);
    for(i=1;i<=l-1;i++)
    {
        if(isupper(a[i]))
            c++;
    }
    if(c==l-1 && islower(a[0]))
    {
        a[0]=toupper(a[0]);
        for(i=1;i<=l-1;i++)
            a[i]=tolower(a[i]);
    }
    else if(c==l-1&&isupper(a[0]))
    {
         for(i=0;i<=l-1;i++)
            a[i]=tolower(a[i]);
    }

    puts(a);

}
