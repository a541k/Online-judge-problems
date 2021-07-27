#include<stdio.h>
#include<string.h>

main()
{
    char s[100100];
    int i,n,a=0,d=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<=n-1;i++)
    {
        s[i]=getchar();
        if(s[i]=='A')
        {
            a++;
        }
        if(s[i]=='D')
        {
            d++;
        }


    }
    if(a>d)
        printf("Anton");
    if(d>a)
        printf("Danik");
    if(a==d)
        printf("Friendship");

}
