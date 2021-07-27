#include<bits/stdc++.h>
using namespace std;
const int N = 100 + 10;
int n, a[N];
bool jug()
{
    if(n>13 || n < 10 || a[1] != 1 || a[2] != 1)  return false;
    for(int i=2;i<n;i++)
        if(a[i]-a[i-1] > 2) return false;
    return true;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        sort(a+1, a+n+1);
        printf("%s\n",jug()?"Yes":"No");
    }
}
