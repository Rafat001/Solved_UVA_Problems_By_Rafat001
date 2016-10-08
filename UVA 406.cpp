#include<stdio.h>
int main()
{
    int n,c,i,numbers[1005],j,flag=0,mid,prime[1000],k=0,start;
    numbers[0]=0;
    numbers[1]=numbers[2]=numbers[3]=1;
    for(i=4; i<1005; i+=2)
    {
        numbers[i]=0;
        numbers[i+1]=1;
    }
    for(i=3; i<=32; i+=2)
    {
        if(numbers[i]==1)
        {
            for(j=i*i; j<=1005; j+=i)
            {
                numbers[j]=0;
            }
        }
    }
    while(scanf("%d%d",&n,&c)==2)
    {
        if(n==0)
        {
            printf("0 0: 1\n\n");
        }
        else
        {
            flag=0,mid=0,start=0,k=0;
            for(i=1; i<=n; i++)
            {
                if(numbers[i]==1)
                {
                    prime[k]=i;
                    flag++;
                    k++;
                }
            }
            if(flag%2==0)
            {
                mid=2*c;
                if(mid>=flag)
                {
                    mid=0;
                }
            }
            else
            {
                mid=(2*c)-1;
                if(mid>=flag)
                {
                    mid=0;
                }
            }
            if(mid>0)
            {
                mid=(flag-mid);
                start=(mid/2)+1;
            }
            else
            {
                start=1;
            }
            printf("%d %d:",n,c);
            for(i=start-1; i<=flag-start; i++)
            {
                printf(" %d",prime[i]);
            }
            printf("\n\n");
        }
    }
}
