#include<stdio.h>
int main()
{
    int i,N,j,array[10],flag1=1,flag2=1;
    scanf("%d",&N);
    printf("Lumberjacks:\n");
    for(i=1; i<=N; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&array[j]);
        }
        for(j=0; j<9; j++)
        {
            if(array[j]<array[j+1])
            {
                flag1=1;
            }
            else
            {
                flag1=0;
                break;
            }
        }
        for(j=0; j<9; j++)
        {
            if(array[j]>array[j+1])
            {
                flag2=1;
            }
            else
            {
                flag2=0;
                break;
            }
        }
        if(flag1==1||flag2==1)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
}
