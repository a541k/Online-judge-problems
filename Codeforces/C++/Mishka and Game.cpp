#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int m[n],c[n],mr=0,cr=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i]>>c[i];
        if(m[i]>c[i])
            mr++;
        if(c[i]>m[i])
            cr++;
    }
    if(mr > cr)
        cout<<"Mishka";
    if(cr> mr)
        cout<<"Chris";
    else if(cr==mr)
        cout<<"Friendship is magic!^^";
}
