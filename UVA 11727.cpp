#include<stdio.h>
int main()
{
    int T,J,a,b,c;
    scanf("%d",&T);
    for(J=1;J<=T;J++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a>b&&b>c) || (c>b&&b>a))
            printf("Case %d: %d\n",J,b);
        else if((b>c&&c>a) || (a>c&&c>b))
            printf("Case %d: %d\n",J,c);
        else if((c>a&&a>b) || (b>a&&a>c))
            printf("Case %d: %d\n",J,a);
    }
}
