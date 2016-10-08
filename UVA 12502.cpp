#include<stdio.h>
int main()
{
    int T,x,y,z,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        double a,b,c;
        a=(double)z/(x+y);
        b=(double)(x-y)*a;
        c=(double)(x*a)+b;
        printf("%.0lf\n",c);
    }
    return 0;
}
