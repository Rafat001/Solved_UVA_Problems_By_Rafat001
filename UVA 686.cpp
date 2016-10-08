#include<stdio.h>
#define Max 50000
int numbers[Max];
int main()
{
    int i,j,n,sum;
    numbers[0]=numbers[1]=1;
    for(i=4;i<Max;i+=2)
    {
        numbers[i]=1;
    }
    for(i=3;i<225;i+=2)
    {
        if(numbers[i]==0)
        {
            for(j=i*i;j<Max;j+=i)
            {
                numbers[j]=1;
            }
        }
    }
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n-i;j++)
            {
                if((numbers[i]==0 && numbers[j]==0)&&(i+j==n))
                    {
                        sum++;
                    }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
