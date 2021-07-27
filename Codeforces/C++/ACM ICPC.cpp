#include<iostream>
using namespace std;
main()
{
    int a[6],i,s=0,j,k,l,m,n,p=0;
    for(i=0; i<6; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(j==i)
                continue;
            for(k=2; k<6; k++)
            {
                if(k==i||k==j)
                    continue;
                s=a[i]+a[j]+a[k];
                for(l=0; l<6; l++)
                {
                    if(l==i||l==j||l==k)
                        continue;
                    for(m=1; m<6; m++)
                    {
                        if(m==i||m==j||m==k||m==l)
                            continue;
                        for(n=2; n<6; n++)
                        {
                            if(n==i||n==j||n==k||n==l||n==m)
                                continue;
                            p=a[l]+a[m]+a[n];
                            if(p==s)
                                goto cc;
                        }
                    }
                }
            }
        }
    }
cc:
    if(p==s)
        cout<<"YES";
    else
        cout<<"NO";

}
