#include<stdio.h>
#include<math.h>
int main()
{
    long long n,t=1;
    double ans;
    while(scanf("%lld",&n)==1)
    {
        ans=0;
        if(n==0)
            break;
        ans=ceil((3+sqrt((9+(8*n))))/2);
        printf("Case %lld: %lld\n",t,(long long)ans);
        t++;
    }
    return 0;
}

