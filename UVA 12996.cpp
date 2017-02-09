#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,l,arr[15],brr[15],sum,flag,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        sum=flag=0;
        memset(arr,0,sizeof(arr));
        memset(brr,0,sizeof(brr));
        scanf("%d%d",&n,&l);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&brr[i]);
            if(brr[i]<arr[i])
                flag=1;
        }
        if(flag==1 || sum>l)
        {
            printf("Case %d: No\n",cs++);
        }
        else
            printf("Case %d: Yes\n",cs++);
    }
}
