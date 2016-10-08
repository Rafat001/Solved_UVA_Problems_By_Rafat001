#include<stdio.h>
int main()
{
    int n,sum;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        else if(n>9)
        {
            while(n>9)
            {
                sum=0;
                while(n>0)
                {
                    sum=sum+n%10;
                    n/=10;
                }
                n=sum;
            }
            printf("%d\n",sum);
        }
        else
        {
            printf("%d\n",n);
        }
    }
    return 0;
}
