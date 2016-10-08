#include<stdio.h>
#include<math.h>
int main()
{
    double n,b,c,d,u,v,s,t,a;
    int cs=1;
    while(scanf("%lf",&n)==1)
    {
        if(n==0)
            break;
        scanf("%lf%lf%lf",&b,&c,&d);
        if(n==1)
        {
            u=b,v=c,t=d;
            a=(v-u)/t;
            s=(u*t)+(0.5*a*(t*t));
            printf("Case %d: %.3lf %.3lf\n",cs,s,a);
        }
        else if(n==2)
        {
            u=b,v=c,a=d;
            t=(v-u)/a;
            s=(u*t)+(0.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",cs,s,t);
        }
        else if(n==3)
        {
            u=b,a=c,s=d;
            v=sqrt((2*a*s)+(u*u));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",cs,v,t);
        }
        else if(n==4)
        {
            v=b,a=c,s=d;
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",cs,u,t);
        }
        cs++;
    }
    return 0;
}
