
#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,b,sum=0;
    char c[20];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%s",c);
        if(strcmp(c,"donate")==0)
        {
            scanf("%d",&b);
            sum=sum+b;
        }
        else
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
