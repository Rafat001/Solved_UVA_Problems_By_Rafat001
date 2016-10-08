#include<stdio.h>
#include<string.h>
int main()
{
    double a,b,total;
    int t,i,l,j;
    char c[20];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        total=0,a=0,b=0;
        scanf("%lf",&a);
        gets(c);
        l=strlen(c);
        for(j=0;j<l;j++)
        {
            if(c[j]>='0' && c[j]<='9')
            {
                b=c[j]-'0';
                break;
            }
        }
        total=total+(a*0.5)+(b*0.05);
        printf("Case %d: %g\n",i,total);
    }
    return 0;
}
