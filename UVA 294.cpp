#include<stdio.h>
#include<math.h>
int main()
{
    long long t,i,a,b,limit,sum,maxx,n,j,k;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        maxx=0;
        scanf("%lld%lld",&a,&b);
        for(j=a; j<=b; j++)
        {
            sum=0;
            limit=sqrt(j);
            for(k=1; k<=limit; k++)
            {
                if(j%k==0)
                {
                    sum++;
                    if(j/k!=k)
                    {
                        sum++;
                    }
                }
            }
            if(sum>maxx)
            {
                maxx=sum;
                n=j;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,n,maxx);
    }
    return 0;
}
