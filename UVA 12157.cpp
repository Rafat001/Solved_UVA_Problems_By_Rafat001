#include<stdio.h>
int main()
{
    int t,i,a,n,j,mile,juice,sum_m,sum_j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        sum_m=0;
        sum_j=0;
        mile=0;
        juice=0;
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a);
            a++;
            mile=a/30;
            juice=a/60;
            if(a%30)
                mile++;
            if(a%60)
                juice++;
            mile*=10;
            juice*=15;
            sum_m=sum_m+mile;
            sum_j=sum_j+juice;
        }
        if(sum_m<sum_j)
        {
            printf("Case %d: Mile %d\n",i,sum_m);
        }
        else if(sum_j<sum_m)
        {
            printf("Case %d: Juice %d\n",i,sum_j);
        }
        else
        {
            printf("Case %d: Mile Juice %d\n",i,sum_j);
        }
    }
    return 0;
}
