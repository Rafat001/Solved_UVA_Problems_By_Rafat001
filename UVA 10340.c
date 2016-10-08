#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000000],t[1000000];
    int i,j,l,flag,k,l1;
    while(scanf("%s%s",c,t)!=EOF)
    {
        flag=0;
        k=0;
        l=strlen(t);
        l1=strlen(c);
        for(i=0;i<l1;i++)
        {
            for(j=k;j<l;j++)
            {
                if(c[i]==t[j])
                {
                    flag++;
                    k=j+1;
                    break;
                }
            }
        }
        if(flag==strlen(c))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
