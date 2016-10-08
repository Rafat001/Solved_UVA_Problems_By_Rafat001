#include<stdio.h>
int main()
{
    long long n,i,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+(i*i*i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
