#include<stdio.h>
int main()
{
    int t,i,cs=1,thousand;
    double a,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        thousand=0;
        for(i=1;i<=12;i++)
        {
            scanf("%lf",&a);
            sum=sum+a;
        }
        sum=sum/12;
        if(sum>=1000)
        {
            thousand=sum/1000;
            sum=sum-(thousand*1000);
            printf("%d $%d,%.2lf\n",cs,thousand,sum);
        }
        else
        {
            printf("%d $%.2lf\n",cs,sum);
        }
        cs++;
    }
    return 0;
}
