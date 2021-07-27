#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110];
    int l,i;
    gets(a);
    l=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        if(isupper(a[i]))
          a[i]=tolower(a[i]);
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
            continue;
        printf(".%c",a[i]);
    }

}
