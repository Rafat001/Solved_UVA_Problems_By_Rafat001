#include<stdio.h>
int main()
{
    int n,i,a[1000],x,flag=0,j;
    while (scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        flag=0;
        for(i=1; i<=n-1; i++)
        {
            for(j=0; j<=n-2; j++)
            {
                if(a[j]>a[j+1])
                {
                    x=a[j];
                    a[j]=a[j+1];
                    a[j+1]=x;
                    flag++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",flag);
    }
    return 0;
}
