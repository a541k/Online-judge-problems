#include<stdio.h>
main()
{
    int i,l,c=0;
    char p[111];
    l=strlen(gets(p));
    for(i=0;i<l;i++)
    {
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
        {
            c++;
        }
    }
    if(c>0)
        printf("YES");
    else
        printf("NO");
}
