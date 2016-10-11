#include<stdio.h>
int main()
{
    int t,i,year,year1,date,date1,j,sum;
    char c[50],c1[50];
    scanf("%d",&t);
    while(getchar()!='\n');
    for(i=0; i<t; i++)
    {
        sum=0;
        scanf("%s%d,%d",c,&date,&year);
        scanf("%s%d,%d",c1,&date1,&year1);
        if((c[0]=='J'&&c[1]=='a')||(c[0]=='F'))
        {
        }
        else
        {
            year++;
        }
        if((c1[0]=='J'&&c1[1]=='a')||(c1[0]=='F'&&date1<=28))
        {
            year1--;
        }
        for(j=year; ; j++)
        {
            if(j%400==0 ||(j%4==0 && j%100!=0))
            {
                year=j;
                break;
            }
        }
        for(j=year1; ; j--)
        {
            if(j%400==0 ||(j%4==0 && j%100!=0))
            {
                year1=j;
                break;
            }
        }
        sum=(year1/4-year1/100+year1/400)-(year/4-year/100+year/400);
        printf("Case %d: %d\n",i+1,sum+1);
    }
    return 0;
}

