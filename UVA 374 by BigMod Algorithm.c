#include<stdio.h>
int mod(int b,int p, int m)
{
    if(p==0)
        return 1;
    if(p%2==1)
    {
        int part1=b%m;
        int part2=mod(b,p-1,m);
        return (part1*part2)%m;
    }
    else if(p%2==0)
    {
        int half=mod(b,p/2,m);
        return (half*half)%m;
    }
}
int main()
{
    int b,p,m,i,sum;
    while(scanf("%d%d%d",&b,&p,&m)==3)
    {
        printf("%d\n",mod(b,p,m));
    }
    return 0;
}
