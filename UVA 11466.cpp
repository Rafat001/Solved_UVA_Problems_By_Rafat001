#include<stdio.h>
#include<math.h>
int main()
{
    long long n,i,maxx,flag,limit,gg,count;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(n<0)
            n=-1*n;
        maxx=0;
        flag=0;
        count=0;
        limit=sqrt(n);
        for(i=2; i<=limit; i++)
        {
            gg=0;
            while(n%i==0)
            {
                gg=1;
                flag=1;
                maxx=i;
                n=n/i;
            }
            if(gg==1)
                count++;
            if(n==1)
                break;
        }
        if(n!=1 && maxx!=0)
            maxx=n;
        else if(count<=1)
            maxx=-1;
        printf("%lld\n",maxx);
    }
    return 0;
}
