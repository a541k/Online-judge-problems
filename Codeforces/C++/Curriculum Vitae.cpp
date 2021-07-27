#include<iostream>
using namespace std;

main()
{
    int n,i,c=0,d=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        c++;
        if(a[i]==0)
        d++;
    }
  if(c>=d)
    cout<<c;
  else
    cout<<d;

}
