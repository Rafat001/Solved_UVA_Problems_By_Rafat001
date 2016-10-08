#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l,j,flag,sum,k;
    char c[100];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        sum=0,flag=0;
        gets(c);
        l=strlen(c);
        for(j=0;j<l;j++)
        {
            if(c[j]=='O')
            {
                flag++;
                if(j!=l-1)
                continue;
            }
            for(k=1;k<=flag;k++)
            {
                sum=sum+k;
            }
            if(flag>0)
            {
                flag=0;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
