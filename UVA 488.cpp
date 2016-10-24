#include<stdio.h>
int main()
{
    int t,n,a,i,j,sum,k,l;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&a);
        for(j=1; j<=a; j++)
        {
            sum=1;
            for(k=1; k<=n; k++)
            {
                for(l=1; l<=k; l++)
                {
                    printf("%d",sum);
                }
                sum++;
                printf("\n");
            }
            for(k=n-1; k>=1; k--)
            {
                for(l=1; l<=k; l++)
                {
                    printf("%d",sum-2);
                }
                sum--;
                printf("\n");
            }
            if(i==t && j==a)
            {
                break;
            }
            printf("\n");
        }
    }
    return 0;
}
