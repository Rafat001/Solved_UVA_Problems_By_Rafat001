#include<stdio.h>
int main()
{
    int n,i,a,b,c,d,t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                a=i;
                b=n/i;
                break;
            }
        }
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0 && i!=a)
            {
                c=i;
                d=n/i;
                break;
            }
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n",cs,n,a,b,c,d);
        cs++;
    }
    return 0;
}

