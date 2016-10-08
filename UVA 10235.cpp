#include<stdio.h>
int numbers[1000000];
int main()
{
    int n,i,j,flag=0;
    numbers[0]=numbers[1]=0;
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
        int a=n;
        int reverses=0;
        if(numbers[n]==1)
        {
            while(n!=0)
            {
                reverses=reverses*10;
                reverses+=n%10;
                n=n/10;
            }
            if(numbers[reverses]==1 && reverses!=a)
            {
                printf("%d is emirp.\n",a);
            }
            else
            {
                printf("%d is prime.\n",a);
            }
        }
        else
        {
            printf("%d is not prime.\n",a);
        }
    }
    return 0;
}
