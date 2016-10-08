#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,sum;
    while(scanf("%d",&n)==1)
    {
        sum=0;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(a==n)
            sum++;
        if(b==n)
            sum++;
        if(c==n)
            sum++;
        if(d==n)
            sum++;
        if(e==n)
            sum++;
        printf("%d\n",sum);
    }
    return 0;
}
