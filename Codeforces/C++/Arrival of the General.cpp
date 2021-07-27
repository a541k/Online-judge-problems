#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],i,j=1,mx,mxt=0,mn,mnt=0;
    for(i=0; i<n; i++)
        cin>>a[i];
    mx=a[0];
    mn=mx;
    for(i=1; i<n; i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
                mxt=i;
            }
            if(a[i]<=mn)
            {
                mn=a[i];
                mnt=i;
            }
        }
        if(mnt<mxt)
            cout<<mxt+(n-mnt-1)-1;
        else
            cout<<mxt+(n-mnt)-1;
}
