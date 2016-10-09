#include<stdio.h>
int arr[10005];
int main()
{
    int i,n,a,k;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        k=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a!=0)
            {
                arr[k]=a;
                k++;
            }
        }
        if(k==0)
            printf("0");
        else
        {
            for(i=0; i<k; i++)
            {
                printf("%d",arr[i]);
                if(i<k-1)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

