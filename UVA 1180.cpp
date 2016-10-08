#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        getchar();
        if(n==2||n==3||n==5||n==7||n==13||n==17||n==19||n==31)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
