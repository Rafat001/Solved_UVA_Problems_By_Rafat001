#include<stdio.h>
int main()
{
    int t,i,a,b,c,d,e;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(a+1==b && b+1==c && c+1==d && d+1==e)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
