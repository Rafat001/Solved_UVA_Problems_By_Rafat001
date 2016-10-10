#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k;
    char c[30],c1[30],s[30];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        memset(s,'\0',sizeof(s));
        k=0;
        gets(c);
        gets(c1);
        int l=strlen(c);
        if(strcmp(c,c1)==0)
            printf("Case %d: Yes\n",i);
        else
        {
            if(strlen(c)==strlen(c1))
            {
                printf("Case %d: Wrong Answer\n",i);
            }
            else
            {
                for(j=0;j<l;j++)
                {
                    if((c[j]>='A'&&c[j]<='Z')||(c[j]>='a'&&c[j]<='z'))
                    {
                        s[k]=c[j];
                        k++;
                    }
                }
                if(strcmp(c1,s)==0)
                    printf("Case %d: Output Format Error\n",i);
                else
                    printf("Case %d: Wrong Answer\n",i);
            }
        }
    }
    return 0;
}
