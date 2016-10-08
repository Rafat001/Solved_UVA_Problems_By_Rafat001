#include<stdio.h>
#include<string.h>
int main()
{
    char n[100000];
    int a,i,l,sum,sum1,sum2,flag,rule100=0,rule400=0,leap_year,check=0;
    while(scanf("%s",&n)!=EOF)
    {
        leap_year=0;
        if(check>0)
            printf("\n");
        check++;
        flag=0;
        sum=0,sum1=0,sum2=0,rule100=0,rule400=0;
        l=strlen(n);
        for(i=0; i<l; i++)
        {
            a=n[i]-'0';
            sum=sum*10+a;
            sum=sum%4;
            sum1=sum1*10+a;
            sum1=sum1%15;
            sum2=sum2*10+a;
            sum2=sum2%55;
            rule100=rule100*10+a;
            rule100=rule100%100;
            rule400=rule400*10+a;
            rule400=rule400%400;
        }
        if((sum==0 && rule100!=0 ) || rule400==0)
        {
            printf("This is leap year.\n");
            flag=1;
            leap_year=1;
        }
        if(sum1==0)
        {
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(sum2==0 && leap_year==1)
        {
            printf("This is bulukulu festival year.\n");
            flag=1;
        }
        if(flag==0)
        {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
