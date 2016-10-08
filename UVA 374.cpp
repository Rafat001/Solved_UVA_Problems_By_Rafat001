#include<stdio.h>
#include<math.h>
int main()
{
    long double b,p;
    long long ans,m;
    while(scanf("%Lf%Lf%lld",&b,&p,&m)==3)
    {
        ans=0;
        ans=(long long)pow(b,p);
        printf("%lld\n",ans%m);
    }
}
