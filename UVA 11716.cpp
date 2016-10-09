#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,i,l,limit,j,k;
    char c[10005];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(c);
        l=strlen(c);
        limit=sqrt(l);
        if(l==limit*limit)
            {
                for(j=0;j<limit;j++)
                {
                    for(k=j;k<l;k+=limit)
                    {
                        printf("%c",c[k]);
                    }
                }
            }
        else
            printf("INVALID");
        printf("\n");
    }
    return 0;
}
