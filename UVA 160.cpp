#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int fq[105],n,limit,i,j,k,m,ans[105];
    while(scanf("%d",&n)==1 && n!=0)
    {
        int flag=0,gg=0;
        limit=sqrt(n);
        memset(fq,0,sizeof(fq));
        memset(ans,0,sizeof(ans));
        for(i=2; i<=n; i++)
        {
            for(j=2; j<=n; j++)
            {
                k=i;
                while(k%j==0 && fq[j]!=-1)
                {
                    fq[j]++;
                    k=k/j;
                }
                if(fq[j]!=0 && fq[j]!=-1)
                {
                    for(m=i+i; m<=n; m+=i)
                    {
                        fq[m]=-1;
                    }
                }
            }
        }
        if(n<10)
            printf("  %d! =",n);
        else if(n<100)
            printf(" %d! =",n);
        else
            printf("%d! =",n);
        k=0;
        for(i=2; i<=n; i++)
        {
            if(fq[i]!=0 && fq[i]!=-1)
            {
                ans[k]=fq[i];
                k++;
            }
        }
        for(i=0;i<k;i++)
        {
            if(ans[i]<10)
                printf("  %d",ans[i]);
            else if(ans[i]<100)
                printf(" %d",ans[i]);
            else if(ans[i]==100)
                printf("%d",ans[i]);
            flag++;
            if(flag==15 && i!=k-1)
            {
                printf("\n");
                printf("      ");
            }
        }
        printf("\n");
    }
}
