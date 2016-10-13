#include<stdio.h>
int main()
{
    long long fib[100]={0},i,n;
    fib[1]=1;
    fib[2]=2;
    for(i=3;i<=80;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        printf("%lld\n",fib[n]);
    }
    return 0;
}
