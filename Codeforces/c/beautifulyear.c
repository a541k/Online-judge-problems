#include<stdio.h>
main()
{
    int i,j,n,b,s[3];
    scanf("%d",&n);
    for(i=n+1;i<=9000;i++)
    {
        b=i;

            while(i>0)
            {s[j]=i%10;
            i=i/10;}
        if(s[0]!=s[1] && s[0]!=s[2] &&s[0]!=s[3] &&s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[2])
                break;

    }
    printf("%d",b);
}
