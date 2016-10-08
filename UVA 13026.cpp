#include<stdio.h>
#include<string.h>
char number[1000][11],real[15];
int main()
{
    int i,j,t,n,k,flag=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        getchar();
        for(j=0; j<n; j++)
        {
            scanf("%s",number[j]);
        }
        scanf("%s",real);
        printf("Case %d:\n",i);
        for(j=0; j<n; j++)
        {
            flag=0;
            for(k=0; k<strlen(real); k++)
            {
                if(number[j][k]!=real[k])
                {
                    flag++;
                    if(flag>1)
                    {
                        break;
                    }
                }
            }
            if(flag<=1)
            {
                printf("%s\n",number[j]);
            }
        }
    }
    return 0;
}
