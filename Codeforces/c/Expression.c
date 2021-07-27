#include<stdio.h>
main()
{
    int a,b,c,x1,x2,x3,x4,x5,x6;
    scanf("%d%d%d",&a,&b,&c);
    x1=a*b*c;
    x2=a+(b*c);
    x3=(a*b)+c;
    x4=a+b+c;
    x5=(a+b)*c;
    x6=a*(b+c);
    if(a==2 && b==2 && c==2)
        printf("%d",8);
    if(x1>x2 && x1>x3 && x1>x4 && x1>x5 && x1>x6)
    printf("%d",x1);
    if(x2>x1 && x2>x3 && x2>x4 && x2>x5 && x2>x6)
    printf("%d",x2);
    if(x3>x2 && x3>x1 && x3>x4 && x3>x5 && x3>x6)
    printf("%d",x3);
    if(x4>x2 && x4>x3 && x4>x1 && x4>x5 && x4>x6)
    printf("%d",x4);
    if(x5>x2 && x5>x3 && x5>x1 && x5>x4 && x5>x6)
    printf("%d",x5);
    if(x6>x2 && x6>x3 && x6>x1 && x6>x5 && x6>x4)
    printf("%d",x6);


}
