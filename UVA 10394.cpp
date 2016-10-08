
#include<stdio.h>
#define Max 20000005
int numbers[Max],prime[1000000];
int main()
{
    int i,j,n,k=1;
    numbers[0]=numbers[1]=numbers[2]=1;
    for(i=4;i<Max;i+=2)
    {
        numbers[i]=1;
    }
    for(i=3;i<4473;i+=2)
    {
        if(numbers[i]==0)
        {
            for(j=i*i;j<Max;j+=i)
            {
                numbers[j]=1;
            }
        }
    }
    for(i=3;i<Max;i+=2)
    {
        if(numbers[i]==0 && numbers[i+2]==0)
        {
            prime[k]=i;
            k++;
        }
    }
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",prime[n],prime[n]+2);
    }
    return 0;
}
