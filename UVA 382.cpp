#include<stdio.h>
int main()
{
    int n,sum,space,i;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        sum=0;
        if(n<10)
            space=4;
        else if(n<100)
            space=3;
        else if(n<1000)
            space=2;
        else if(n<10000)
            space=1;
        else
            space=0;
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            for(i=1; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                }
            }
            for(i=1; i<=space; i++)
            {
                printf(" ");
            }
            if(sum==n)
                printf("%d  PERFECT\n",n);
            else if(sum<n)
                printf("%d  DEFICIENT\n",n);
            else
                printf("%d  ABUNDANT\n",n);
        }
    }
    return 0;
}
