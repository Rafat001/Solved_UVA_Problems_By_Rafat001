#include<stdio.h>
#define pi 3.14159265359
int main()
{
    int t,i;
    double red,green,l,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        red=0,green=0;
        scanf("%lf",&l);
        r=l/5;
        red=(pi*r*r);
        green=(((l*.6)*l)-red);
        printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}
