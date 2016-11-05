#include<stdio.h>
#include<math.h>
#define Max 1000005
int total[Max];
int main()
{
    int n,limit,i,j,k,ans=0;
    for(i=2; i<=Max; i++)
    {
        k=i;
        limit=sqrt(i);
        for(j=2; j<=limit; j++)
        {
            while(k%j==0)
            {
                ans++;
                k=k/j;
            }
        }
        if(k!=1)
            ans++;
        total[i]=ans;
    }
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",total[n]);
    }
    return 0;
}
