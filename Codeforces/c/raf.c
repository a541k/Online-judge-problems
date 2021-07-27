#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110][110];
    int t,r,c,i,j,k,l,m;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&r,&c);

        getchar();

        for(j=0; j<=r-1; j++)
            for(k=0; k<=c-1; k++)
            {
                scanf("%c",&a[j][k]);
            }


        for(j=0; j<=r-1; j++)
        {
            for(k=0; k<=c-1; k++)
            {
                if(a[j][k]=='$');
                {
                    l=j++;
                    m=k++;
                    printf("%d,%d\n",j,k);
                }
            }

        }
    }
}
