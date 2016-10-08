#include<stdio.h>
int main()
{
    int a,b,c,d,l,sum,flag,i;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)==5)
    {
        sum=0;
        flag=0;
        if(a==0&&b==0&&c==0&&d==0&&l==0)
        {
            break;
        }
        else
        {
            for(i=0;i<=l;i++)
            {
                sum=((a*(i*i))+(b*i)+c);
                if(sum%d==0)
                    flag++;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}
