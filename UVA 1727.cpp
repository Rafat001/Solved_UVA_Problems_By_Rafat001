#include<stdio.h>
#include<string.h>
int main()
{
    char month[10],day[10];
    int t,i,d,m;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        d=0,m=0;
        scanf("%s %s",month,day);
        if(strcmp(day,"SUN")==0)
        {
            d=1;
        }
        if(strcmp(day,"MON")==0)
        {
            d=2;
        }
        if(strcmp(day,"TUE")==0)
        {
            d=3;
        }
        if(strcmp(day,"WED")==0)
        {
            d=4;
        }
        if(strcmp(day,"THU")==0)
        {
            d=5;
        }
        if(strcmp(day,"FRI")==0)
        {
            d=6;
        }
        if(strcmp(day,"SAT")==0)
        {
            d=7;
        }
        if(strcmp(month,"JAN")==0||strcmp(month,"MAR")==0||strcmp(month,"MAY")==0||strcmp(month,"JUL")==0||strcmp(month,"AUG")==0||strcmp(month,"OCT")==0||strcmp(month,"DEC")==0)
        {
            m=31;
        }
        else if(strcmp(month,"APR")==0||strcmp(month,"JUN")==0||strcmp(month,"SEP")==0||strcmp(month,"NOV")==0)
        {
            m=30;
        }
        else if(strcmp(month,"FEB")==0)
        {
            m=28;
        }
        int sum=8;
        if(m==31 && (d==5 || d==6))
        {
            sum+=2;
        }
        else if(m==31 && (d==7 || d==4))
        {
            sum+=1;
        }
        else if(m==30 && (d==6))
        {
            sum+=2;
        }
        else if(m==30 && d==7 || d==5)
        {
            sum+=1;
        }
        if(m==28)
        printf("8\n");
        else
        printf("%d\n",sum);
    }
    return 0;
}
