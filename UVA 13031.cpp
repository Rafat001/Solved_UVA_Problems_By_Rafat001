#include<stdio.h>
int main()
{
    int t,i,n,cs=1,rating[1005],power[100005],j;
    long long sum,maxx;
    scanf("%d",&t);
    while(t--)
    {
        maxx=0,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&power[i],&rating[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<n;j++)
            {
                if(rating[j]>=rating[i])
                {
                    sum=sum+power[j];
                }
            }
            sum=sum*rating[i];
            if(sum>maxx)
                maxx=sum;
        }
        printf("Case %d: %lld\n",cs,maxx);
        cs++;
    }
    return 0;
}
