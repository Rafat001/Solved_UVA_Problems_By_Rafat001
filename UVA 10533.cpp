#include<stdio.h>
#include<math.h>
#define Max 1000005
int numbers[Max],prime[Max];
int main()
{
    int i,j,l,limit,flag,a,b,t,k,sum,maxx=0;
    numbers[0]=numbers[1]=1;
    for(i=4; i<Max; i+=2)
    {
        numbers[i]=1;
    }
    l=sqrt(Max);
    for(i=3; i<=l; i+=2)
    {
        if(numbers[i]==0)
        {
            for(j=i*i; j<Max; j+=i)
            {
                numbers[j]=1;
            }
        }
    }
    for(i=0; i<Max; i++)
    {
        sum=0;
        if(numbers[i]==0)
        {
            k=i;
            while(k>0)
            {
                sum=sum+k%10;
                k=k/10;
            }
            if(numbers[sum]==0)
            {
                maxx++;
                prime[i]=maxx;
            }
            else
            {
                prime[i]=maxx;
            }
        }
        else
            prime[i]=maxx;
    }
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int ans=0;
        scanf("%d%d",&a,&b);
        a--;
        printf("%d\n",prime[b]-prime[a]);
    }
    return 0;
}
