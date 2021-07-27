#include<iostream>
using namespace std;
int main()
{
    int n,c=0,d=0,h=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c=c+a[i];
    }
    //h=c/2;
    for(int i=0;i<n;i++)
    {
        h=h+a[i];
        if(c%2==0)
       {
        if(h>=c/2)
        {
            cout<<i+1;
            break;
        }
       }
       else if(c%2!=0)
       {
           if(h>=c/2+1)
           {cout<<i+1;
            break;
           }
       }
    }
    return 0;
}
