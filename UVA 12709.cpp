#include<stdio.h>
int main()
{
    int t,l,w,h,volume,maxx,i,maxx_h;
    while(scanf("%d",&t)==1)
    {
        maxx=0;
        maxx_h=0;
        if(t==0)
            break;
        for(i=1; i<=t; i++)
        {
            scanf("%d %d %d",&l,&w,&h);
            volume=l*w*h;
            if(h>maxx_h)
            {
                maxx_h=h;
                maxx=volume;
            }
            if(h==maxx_h)
            {
                if(volume>maxx)
                {
                    maxx=volume;
                }
            }
        }
        printf("%d\n",maxx);
    }
    return 0;
}
