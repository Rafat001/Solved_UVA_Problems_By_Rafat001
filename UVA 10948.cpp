
#include<stdio.h>
int numbers[1000000];
int main()
{
    int n,i,j,flag=0;
    numbers[0]=0;
    numbers[1]=0;
    numbers[2]=numbers[3]=1;
    for(i=4; i<=1000000; i+=2)
    {
        numbers[i]=0;
        numbers[i+1]=1;
    }
    for(i=3; i<=1000; i+=2)
    {
        if(numbers[i]==1)
        {
            for(j=i*i; j<=1000000; j+=i)
            {
                numbers[j]=0;
            }
        }
    }
    while(scanf("%d",&n)==1)
    {
        flag=0;
        if(n==0)
            break;
        else
        {
            for(i=2; i<=n-2; i++)
            {
                if(numbers[i]==1 && numbers[n-i]==1)
                {
                    if(i+(n-i)==n)
                    {
                        printf("%d:\n",n);
                        printf("%d+%d\n",i,n-i);
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==0)
            {
                printf("%d:\n",n);
                printf("NO WAY!\n");
            }
        }
    }
}
