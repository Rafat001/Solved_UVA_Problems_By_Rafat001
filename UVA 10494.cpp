#include<stdio.h>
#include<string.h>
int main()
{
    char c[10],s[1005];
    int i,l,n,flag;
    while(scanf("%s%s%d",&s,&c,&n)!=EOF)
    {
        flag=0;
        l=strlen(s);
        long long sum=0;
        if(c[0]=='%')
        {
            for(i=0; i<l; i++)
            {
                sum=sum*10+s[i]-'0';
                sum=sum%n;
            }
            printf("%lld\n",sum);
        }
        else if(c[0]=='/')
        {
            for(i=0; i<l; i++)
            {
                sum=sum*10+s[i]-'0';
                if(sum/n!=0)
                {
                    flag=1;
                }
                if(flag==1)
                    printf("%lld",sum/n);
                sum=sum%n;
            }
            if(flag==0)
                printf("0");
            printf("\n");
        }
    }
    return 0;
}
