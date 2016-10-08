#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,book[10005],money,sum,minn[10000],m,i,j,flag[10000],maxx=1000001,low;
    while(scanf("%d",&n)==1)
    {
        sum=0,m=0,low=0,maxx=1000001;
        for(i=0;i<n;i++)
        {
            scanf("%d",&book[i]);
        }
        scanf("%d",&money);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                else if(book[i]+book[j]==money)
                {
                    sum=book[i]+book[j];
                    minn[m]=abs(book[i]-book[j]);
                    if(book[i]>book[j])
                        flag[m]=book[i];
                    else
                        flag[m]=book[j];
                    m++;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            if(minn[i]<maxx)
            {
                maxx=minn[i];
                low=flag[i];
            }
        }
        if(money-low<low)
        {
            low=money-low;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",low,money-low);
    }
    return 0;
}
