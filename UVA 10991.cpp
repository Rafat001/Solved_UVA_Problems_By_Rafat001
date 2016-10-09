#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double r1,r2,r3,a,b,c,d,area;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        a=b=c=d=area=0;
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=sqrt((r1*r2*r3)*(r1+r2+r3));
        b=(r1*r1)*acos(1-((2*r2*r3)/((r1+r2)*(r1+r3))));
        c=(r2*r2)*acos(1-((2*r1*r3)/((r2+r1)*(r2+r3))));
        d=(r3*r3)*acos(1-((2*r1*r2)/((r3+r1)*(r3+r2))));
        area=a-(0.5*(b+c+d));
        printf("%.6lf\n",area);
    }
    return 0;
}

