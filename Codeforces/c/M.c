#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110];
    int i,l,c=0,s=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        if(isupper(a[i]))
            c++;
        if(islower(a[i]))
            s++;
    }
    for(i=0;i<=l-1;i++)
    {
        if(c>s)
            a[i]=toupper(a[i]);
        if(s>=c)
            a[i]=tolower(a[i]);
    }
    puts(a);

}
