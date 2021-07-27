#include<stdio.h>
#include<string.h>
main()
{
    char s[110];
    int l,i,n;
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        gets(s);
        l=strlen(s);
        if(l>10)
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        else
        {
            puts(s);
        }
    }
    return 0;
}
