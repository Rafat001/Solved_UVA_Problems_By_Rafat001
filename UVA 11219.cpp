#include<stdio.h>
int main()
{
    int t,i,d1,d2,m1,m2,y1,y2,c,c1,c2,c3,day=0,month=0,year=0,flag_day,flag_month,age;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        day=0,month=0,year=0,flag_day=0,flag_month=0,age=0;
        scanf("%d%c%d%c%d%d%c%d%c%d",&d1,&c,&m1,&c1,&y1,&d2,&c2,&m2,&c3,&y2);
        if(d1>=d2)
        {
            day=d1-d2;
        }
        else
        {
            day=d1+30-d2;
            flag_day=1;
        }
        if(flag_day==1)
        {
            m2++;
        }
        if(m1>=m2)
        {
            month=m1-m2;
        }
        else
        {
            month=m1+12-m2;
            flag_month=1;
        }
        if(flag_month==1)
        {
            y2++;
        }
        age=y1-y2;
        if(age>130)
            printf("Case #%d: Check birth date\n",i);
        else if(age<0)
            printf("Case #%d: Invalid birth date\n",i);
        else
            printf("Case #%d: %d\n",i,age);
    }
    return 0;
}
