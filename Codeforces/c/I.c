#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char s[111],t[111],k[111];
    int l;
    gets(s);
    gets(t);
    strcpy(k,strrev(t));
    if(strcmp(s,k)==0)
        printf("YES");
    else
        printf("NO");

}
