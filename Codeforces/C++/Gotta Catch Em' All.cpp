#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main()
{
    string a,b="Bulbasaur";
    cin>>a;
    int i,p[7];
    for(i=0;i<7;i++)
        p[i]=0;
    for(i=0;i<a.length();i++)
    {
        if(a[i]=='B')
            p[0]++;
        if(a[i]=='u')
            p[1]++;
        if(a[i]=='l')
            p[2]++;
        if(a[i]=='b')
            p[3]++;
        if(a[i]=='s')
            p[4]++;
         if(a[i]=='a')
            p[5]++;
        if(a[i]=='r')
            p[6]++;

    }
    p[5]=p[5]/2;
    p[1]=p[1]/2;
    sort(p,p+7);

    cout<<p[0];

}
