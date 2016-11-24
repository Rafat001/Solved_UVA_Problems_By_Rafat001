#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,k,total=1;
    scanf("%d",&t);
    while(t--)
    {
        k=0;
        scanf("%d",&n);
        int arr[n],ans[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            ans[i]=arr[i];
        }
        sort(ans,ans+n);
        for(i=0;i<n;i++)
        {
            if(ans[k]==arr[i])
            {
                k++;
            }
        }
        printf("Case %d: %d\n",total,n-k);
        total++;
    }
}
