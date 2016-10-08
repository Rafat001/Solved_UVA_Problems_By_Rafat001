#include<stdio.h>
#include<string.h>
int main()
{
    char c[10005];
    int l,ans,i;
    while(gets(c))
    {
        ans=0;
        l=strlen(c);
        if(l==1&&c[0]=='0')
        {
            break;
        }
        else
        {
            for(i=0;i<l;i++)
            {
                ans=ans*10+c[i]-'0';
                ans=ans%17;
            }
        }
        if(ans==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}

