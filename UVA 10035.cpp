#include<stdio.h>
int main()
{
    long long a,b,carry,sum,x,y,i;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        sum=0;
        carry=0;
        if(a==0&&b==0)
            break;
        while(a>0 || b>0)
        {
            x=a%10;
            y=b%10;
            x=x+y;
            if(carry==1)
            {
                x++;
                carry=0;
            }
            if(x>=10)
            {
                sum++;
                carry=1;
            }
            a=a/10;
            b=b/10;
        }
        if(sum==1)
            printf("1 carry operation.\n");
        else if(sum>1)
            printf("%lld carry operations.\n",sum);
        else
            printf("No carry operation.\n");
    }
    return 0;
}
