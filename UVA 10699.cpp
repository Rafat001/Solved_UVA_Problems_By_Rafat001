#include<stdio.h>
#include<math.h>
int main()
{
    int n,limit,i,k,flag,ans;
    while(scanf("%d",&n)==1 && n!=0)
    {
        ans=n;
        flag=0,k=0;
        limit=sqrt(n);
        for(i=2;i<=limit;i++)
        {
            while(n%i==0)
            {
                flag=1;
                n=n/i;
            }
            if(flag==1)
            {
                k++;
                flag=0;
            }
        }
        if(n!=1)
            k++;
        printf("%d : %d\n",ans,k);
    }
    return 0;
}
