#include<bits/stdc++.h>
using namespace std;
#define Max 1000005
long long numbers[Max],prime[Max];
int main()
{
    long long i,j,l,limit,flag,k,n,gg;
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
    prime[0]=2;
    k=1;
    for(i=3; i<Max; i+=2)
    {
        if(numbers[i]==0)
        {
            prime[k]=i;
            k++;
        }
    }
    while(scanf("%lld",&n)==1)
    {
        queue<int>list;
        flag=0;
        if(n==0)
            break;
        printf("%d = ",n);
        if(n<0)
        {
            list.push(-1);
            n=-1*n;
        }
        limit=sqrt(n);
        for(i=0; prime[i]<=limit; i++)
        {
            if(n%prime[i]==0)
            {
                flag=1;
                while(n%prime[i]==0)
                {
                    list.push(prime[i]);
                    n=n/prime[i];
                }
            }
            if(flag==1 && n!=1)
                gg=1;
            if(n==1)
                {
                    gg=0;
                    break;
                }
        }
        if(flag==0)
            {
                list.push(n);
                gg=0;
            }
        if(gg==1)
            list.push(n);
        while(!list.empty())
        {
            k=list.front();
            list.pop();
            if(!list.empty())
            {
                printf("%d x ",k);
            }
            else
            {
                printf("%d",k);
            }
        }
        printf("\n");
    }
    return 0;
}
