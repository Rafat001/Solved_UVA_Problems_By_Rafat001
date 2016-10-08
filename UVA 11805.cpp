#include<stdio.h>
int main()
{
    int i,T,N,K,P,total;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&N,&K,&P);
        total=K+P;
        while(total>N)
        {
            total=total-N;
        }
        printf("Case %d: %d\n",i,total);
    }
    return 0;
}
