#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
    char a[100];
    int i,l,c=0;
    gets(a);
    if(islower(a[0]))
        a[0]=toupper(a[0]);
    l=strlen(a);
    for(i=1;i<=l-1;i++)
    {
        if(isupper(a[i]))
        {
           a[i]=tolower(a[i]);
        }
    }

    puts(a);
}

