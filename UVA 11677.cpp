#include<stdio.h>
int main()
{
    int a,b,c,d,time,flag,hour;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {
        if(a==0&&b==0&&c==0&&d==0)
        {
            break;
        }
        else
        {
            hour=c-a;
            time=d-b;
            if(time<0)
            {
                time+=60;
                hour--;
            }
            if(hour<0)
            {
                hour+=24;
            }
            printf("%d\n",hour*60+time);
        }
    }
}
