#include<stdio.h>
#define maxx 1000005
int numbers[maxx];
int main()
{
    int i,j,n;
    numbers[0]=numbers[1]=1;
    for(i=4;i<maxx;i+=2)
    {
        numbers[i]=1;
    }
    for(i=3;i<1000;i+=2)
    {
        if(numbers[i]==0)
        {
            for(j=i*i;j<maxx;j+=i)
            {
                numbers[j]=1;
            }
        }
    }
    while(scanf("%d",&n)==1)
    {
        int remainder=0,reverse=0,main=n;
        printf("%d\n",n*2);
        if(numbers[n]==0)
        {
            while(n!=0)
            {
                remainder=n%10;
                reverse=reverse*10+remainder;
                n=n/10;
            }
            if(reverse==main)
            {
                break;
            }
        }
    }
    return 0;
}

