#include<stdio.h>
#include<string.h>

main()
{
    int n,i,j,c=0,d=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            continue;
        if(s[i]=='S' && s[i+1]=='F')
            c++;
        if(s[i]=='F' && s[i+1]=='S')
            d++;
    }
    if(c>d)
        printf("YES");
    else
        printf("NO");
}
