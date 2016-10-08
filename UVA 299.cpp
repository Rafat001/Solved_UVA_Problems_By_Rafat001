#include<stdio.h>
int main()
{
    int n,l,i,a[1000],x,flag,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        flag=0;
        scanf("%d",&l);
        for(j=0; j<l; j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1;j<=l-1;j++)
        {
            for(k=0;k<=l-2;k++)
            {
                if(a[k]>a[k+1])
                {
                    x=a[k];
                    a[k]=a[k+1];
                    a[k+1]=x;
                    flag++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",flag);
    }
    return 0;
}
