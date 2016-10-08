
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,maxx;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        else
        {
            maxx=max(a,b);
            maxx=max(c,maxx);
            if(maxx==a)
            {
                c=c*c;
                b=b*b;
                d=sqrt(c+b);
                if(a==d)
                {
                    printf("right\n");
                }
                else
                {
                    printf("wrong\n");
                }
            }
            else if(maxx==b)
            {
                a=a*a;
                c=c*c;
                d=sqrt(a+c);
                if(b==d)
                {
                    printf("right\n");
                }
                else
                {
                    printf("wrong\n");
                }
            }
            else
            {
                a=a*a;
                b=b*b;
                d=sqrt(a+b);
                if(c==d)
                {
                    printf("right\n");
                }
                else
                {
                    printf("wrong\n");
                }
            }
        }
    }
    return 0;
}
