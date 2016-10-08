#include<stdio.h>
int main()
{
    int t,r,i,len,wid,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        len=0,wid=0,a=0,b=0;
        scanf("%d",&r);
        len=r*5;
        wid=r*3;
        a=-len*.45;
        b=len*.55;
        printf("Case %d:\n",i);
        printf("%d %d\n",a,(wid/2));
        printf("%d %d\n",b,(wid/2));
        printf("%d %d\n",b,-(wid/2));
        printf("%d %d\n",a,-(wid/2));
    }
    return 0;
}
