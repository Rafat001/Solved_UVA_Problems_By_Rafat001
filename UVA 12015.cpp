#include<stdio.h>
int main()
{
    int t,maxx,value[105],i,j;
    char c[105][105];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        maxx=0;
        for(j=0;j<=9;j++)
        {
            scanf("%s%d",c[j],&value[j]);
            if(value[j]>maxx)
            {
                maxx=value[j];
            }
        }
        printf("Case #%d:\n",i);
        for(j=0;j<=9;j++)
        {
            if(value[j]==maxx)
                printf("%s\n",c[j]);
        }
    }
    return 0;
}
