#include<stdio.h>
int main()
{
    int n,b,h,w,cost,beds,ans,minn,flag,i,j;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4)
    {
        minn=2147483640,flag=0;
        for(i=1;i<=h;i++)
        {
            scanf("%d",&cost);
            for(j=1;j<=w;j++)
            {
                scanf("%d",&beds);
                if(beds>=n)
                {
                    ans=n*cost;
                    if(ans<minn && ans<=b)
                    {
                        minn=ans;
                        flag=1;
                    }
                }
            }
        }
        if(flag==1)
            printf("%d\n",minn);
        else
            printf("stay home\n");
    }
    return 0;
}
