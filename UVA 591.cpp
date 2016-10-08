#include<stdio.h>
int main()
{
    int i,n,a[105],sum,average,flag,sets=1;
    while(scanf("%d",&n)==1)
    {
        flag=0;
        average=0;
        sum=0;
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                sum=sum+a[i];
            }
            average=sum/n;
            for(i=0;i<n;i++)
            {
                if(a[i]>average)
                {
                    flag=flag+(a[i]-average);
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n",sets,flag);
        }
        sets++;
    }
    return 0;
}
