#include<stdio.h>
main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int s[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&s[j]);
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(s[j]>s[k])
                {
                    int f=s[k];
                    s[k]=s[j];
                    s[j]=f;
                }
            }
        }
        int c=0;
        if(s[0]==s[1] && s[1]==1)
            c=2;
        for(j=1;j<n-2;j++)
        {
                if((s[j+1]-s[j])<3)
                    c++;

        }
        if(s[n-1]-s[n-2]>=0)
                    c++;
        if(c==n && n>9 && n<14)
            printf("Yes\n");
        else
            printf("No\n");

    }
}
