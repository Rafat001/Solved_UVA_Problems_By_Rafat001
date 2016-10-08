#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int i,flag,l,word;
    while(gets(a))
    {
        flag=0,word=0;
        l=strlen(a);
        for(i=0;i<=l;i++)
        {
            if((a[i]>=65&&a[i]<=90)||(a[i]<=122&&a[i]>=97))
            {
                flag=1;
                continue;
            }
            else
            {
                if(flag==1)
                {
                    word++;
                    flag=0;
                }
            }
        }
        printf("%d\n",word);
    }
    return 0;
}
