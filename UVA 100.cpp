#include<stdio.h>
int main()
{
    int a,b,n,i,x,y,j,flag=0,maxx=0;
    while(scanf("%d%d",&a,&b)==2)
    {
        maxx=0;
        x=a;
        y=b;
        if(a>b)
        {
            n=b;
            b=a;
            a=n;
        }
        for(i=a;i<=b;i++)
        {
            flag=0;
            for(j=i;j!=1;)
            {
                if(j%2!=0)
                {
                    j=(j*3)+1;
                }
                else
                {
                    j/=2;
                }
                flag++;
            }
            if(flag>maxx)
            {
                maxx=flag;
            }
        }
        printf("%d %d %d\n",x,y,maxx+1);
    }
    return 0;
}
