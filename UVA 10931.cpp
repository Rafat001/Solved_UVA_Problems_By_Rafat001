#include<stdio.h>
int main()
{
    int a,i,b,j,temp,x,arr[100000];
    long long binary,counts;
    while(scanf("%d",&i)==1)
    {
        b=1,binary=0;
        if(i==0)
        {
            break;
        }
        else
        {
            counts=0;
            for(j=0;j<=100000;j++)
            {
                temp=i%2;
                if(temp==1)
                {
                    counts++;
                }
                arr[j]=temp;
                i=i/2;
                if(i==0)
                {
                    x=j;
                    break;
                }
            }
        }
        printf("The parity of ");
        for(j=x;j>=0;j--)
        {
            printf("%d",arr[j]);
        }
        printf(" is %d (mod 2).\n",counts);
    }
    return 0;
}
