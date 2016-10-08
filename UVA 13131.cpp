#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,k,j,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int sum=0,l=0;
        scanf("%d%d",&n,&k);
        int limit=sqrt(n);
        for(j=1;j<=limit;j++)
        {
            if(n%j==0)
            {
                if(j%k!=0)
                {
                    sum=sum+j;
                }
                if(((n/j)%k!=0)&&(n/j)!=j)
                {
                    sum=sum+(n/j);
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

