#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,i,j,maxx,win,arr[505],a;
    while(scanf("%d%d",&n,&r)==2)
    {
        maxx=-1;
        memset(arr,0,sizeof(arr));
        for(i=1;i<=r;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a);
                arr[j]+=a;
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]>maxx)
            {
                maxx=arr[i];
                win=i+1;
            }
            if(arr[i]==maxx)
            {
                win=i+1;
            }
        }
        printf("%d\n",win);
    }
    return 0;
}
