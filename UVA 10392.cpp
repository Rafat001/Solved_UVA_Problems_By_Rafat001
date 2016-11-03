#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,flag,n,limit,gg;
    while(scanf("%lld",&n)==1)
    {
        queue<long long>list;
        flag=0;
        if(n<0)
            break;
        limit=sqrt(n);
        for(i=2; i<=limit; i++)
        {
            if(n%i==0)
            {
                flag=1;
                while(n%i==0)
                {
                    list.push(i);
                    n=n/i;
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
            printf("    %lld\n",list.front());
            list.pop();
        }
        printf("\n");
    }
    return 0;
}

