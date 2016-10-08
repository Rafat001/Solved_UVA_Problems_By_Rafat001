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
                ans=ans%11;
            }
        }
        if(ans==0)
            printf("%s is a multiple of 11.\n",c);
        else
            printf("%s is not a multiple of 11.\n",c);
    }
    return 0;
}
