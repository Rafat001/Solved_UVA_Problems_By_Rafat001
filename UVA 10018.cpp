#include<stdio.h>
long long reverses(long long n)
{
    long long rev=0;
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    return rev;
}
int main()
{
    int t,i,p;
    long long n,rev,sum;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        rev=0,p=0,rev=0,sum=0;
        scanf("%lld",&n);
        sum=sum+n;
        rev=reverses(sum);
        sum=sum+rev;
        rev=reverses(sum);
        while(rev!=sum)
        {
            sum=sum+rev;
            p++;
            rev=reverses(sum);
        }
        printf("%d %lld\n",p+1,sum);
    }
    return 0;
}
