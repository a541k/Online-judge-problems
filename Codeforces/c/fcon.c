#include<stdio.h>
main()
{
    long long int a,b,c;
       while(scanf("%lld%lld",&a,&b)==2)
       {
           c=0;
           if(b>a)
         {
         c=b-a;
         printf("%lld\n",c);
         }
          if(a>b)
            {c=a-b;
            printf("%lld\n",c);
            }
       }
}
