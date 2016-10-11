#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double t,a[1005],average,maxx,minn;
    while(scanf("%lf",&t)==1)
    {
        average=maxx=minn=0;
        if(t==0)
            break;
        for(i=0; i<t; i++)
        {
            scanf("%lf",&a[i]);
            average=average+a[i];
        }
        average=average/t;
        for(i=0; i<t; i++)
        {
            double x = (double)(int) ((a[i] - average) * 100) /100.0;
            if(x < 0)
            {
                minn -= x;
            }
            else
            {
                maxx += x;
            }
        }
        if(maxx>minn)
            printf("$%.2lf\n",maxx);
        else
            printf("$%.2lf\n",minn);
    }
    return 0;
}

