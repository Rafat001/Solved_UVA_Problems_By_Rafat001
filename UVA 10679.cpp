#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,lofc,lofs,q,j;
    char c[100005],s[1005];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        scanf("%s",c);
        lofc=strlen(c);
        scanf("%d",&q);
        getchar();
        for(j=0;j<q;j++)
        {
            scanf("%s",s);
            if(strstr(c,s)!=NULL)
            {
                printf("y\n");
            }
            else
                printf("n\n");
        }
    }
    return 0;
}
