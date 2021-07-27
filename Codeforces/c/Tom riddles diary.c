#include<stdio.h>
int main()
{
    int line,i,j,c=0;
    char string[110][110];
    scanf("%d",&line);

    for(i=0;i<line;i++)
    {
        scanf("%s", string[i]);
    }
    for(i=0;i<line;i++)
    {
        c=0;
        for(j=i-1;j>=0;j--)
      {

            if(strcmp(string[i],string[j])==0)
                {c=1; break;}
      }
      if(c==1)
         printf("YES\n");
      else
         printf("NO\n");
    }
    return 0;
}

