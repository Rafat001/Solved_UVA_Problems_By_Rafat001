#include<stdio.h>
int main()
{
    int k[40005]={0},t,i,j,a,b,flag;
    k[1]=k[9]=k[45]=k[55]=k[99]=k[297]=k[703]=k[999]=k[2223]=k[2728]=k[4879]=k[4950]=k[5050]=k[5292]=k[7272]=k[7777]=k[9999]=k[17344]=k[22222]=k[38962]=1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        scanf("%d%d",&a,&b);
        printf("case #%d\n",i);
        for(j=a;j<=b;j++)
        {
            if(k[j]==1)
            {
                flag=1;
                printf("%d\n",j);
            }
        }
        if(flag==0)
            printf("no kaprekar numbers\n");
        if(i!=t)
            printf("\n");
    }
    return 0;
}
