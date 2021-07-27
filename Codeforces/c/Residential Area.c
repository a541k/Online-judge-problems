#include<stdio.h>
main()
{
    int n[11][11],t,N,i,j=0,k,a[10],p=0,s=0,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            for(k=0;k<N;k++)
            { scanf("%d",&n[j][k]); }
        }

        if(N<5)
        {printf("0"); return 0;}
        cc:
        for(j=j+s;j<2+s;j++)
        {
            for(k=0;k<5;k++)
            {
                if(n[j][k]==1) a[0]==1;
                if(n[j][k]==2) a[1]==1;
                if(n[j][k]==3) a[2]==1;
                if(n[j][k]==4) a[3]==1;
                if(n[j][k]==5) a[4]==1;
                if(n[j][k]==6) a[5]==1;
                if(n[j][k]==7) a[6]==1;
                if(n[j][k]==8) a[7]==1;
                if(n[j][k]==9) a[8]==1;
                if(n[j][k]==10)a[9]==1;
            }
        }
        for(k=0;k<10;k++)
        { if(a[k]==1) {p++; printf("%d ",a[k]);}}
        s=0;
        if(p==10){c++; p=0;} s+=2;
        if(j<=N) goto cc;
        printf("%d",c);
    }
}
