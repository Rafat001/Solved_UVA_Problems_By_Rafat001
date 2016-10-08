#include<stdio.h>
int main()
{
    int t,i;
    double increase,sum,c,f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        increase=0,sum=0;
        scanf("%lf%lf",&c,&f);
        c=(((9*c)+160)/5);
        sum=c+f;
        increase=(((5*sum)-160)/9);
        printf("Case %d: %.2lf\n",i,increase);
    }
    return 0;
}
