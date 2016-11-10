#include<stdio.h>
#include<math.h>
#define maxx 1000005
long long prime[maxx],pp[maxx];
int main()
{
    long long n,i;
    int l=sqrt(maxx),j;
    prime[0]=prime[1]=1;
    for(i=4; i<maxx; i+=2)
    {
        prime[i]=1;
    }
    for(i=3; i<=l; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i; j<maxx; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    int k=0;
    for(i=2;i<maxx;i++)
    {
        if(prime[i]==0)
            pp[k++]=i;
    }
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            break;
        for(i=0; i<k; i++)
        {
            while(n%pp[i]==0)
            {
                printf("    %lld\n",pp[i]);
                n=n/pp[i];
            }
            if(n==1)
                break;
        }
        if(n!=1)
            printf("    %lld\n",n);
        printf("\n");
    }
    return 0;
}

