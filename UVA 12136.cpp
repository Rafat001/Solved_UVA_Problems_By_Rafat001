#include<stdio.h>
int main()
{
    int t,i,a,b,c,d,a1,b1,c1,d1,start1,end1,start2,end2;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        scanf("%d:%d %d:%d",&a1,&b1,&c1,&d1);
        start1=a*60+b;
        end1=c*60+d;
        start2=a1*60+b1;
        end2=c1*60+d1;
        if(start1>end2)
            printf("Case %d: Hits Meeting\n",i);
        else if(end1<start2)
            printf("Case %d: Hits Meeting\n",i);
        else
            printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
