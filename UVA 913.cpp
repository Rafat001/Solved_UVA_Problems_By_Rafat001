#include<stdio.h>
int main()
{
    long long a,b,c,sum=0,i;
    while(scanf("%lld",&a)==1)
    {
        for(i=a; i>=1; i-=2)
        {
            a=a+(i-2);
        }
        b=a-1;
        c=a-2;
        sum=((a*2)-1)+((b*2)-1)+((c*2)-1)+6;
        printf("%lld\n",sum);
    }
    return 0;
}
