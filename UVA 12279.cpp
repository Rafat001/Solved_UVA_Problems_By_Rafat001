#include<stdio.h>
int main()
{
    int t,i,a,sum,cs=1;
    while(scanf("%d",&t)==1)
    {
        if(t==0)
            break;
        sum=0;
        for(i=1;i<=t;i++)
        {
            scanf("%d",&a);
            if(a==0)
                sum--;
            else
                sum++;
        }
        printf("Case %d: %d\n",cs,sum);
        cs++;
    }
    return 0;
}
