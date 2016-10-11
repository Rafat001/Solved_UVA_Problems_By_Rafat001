#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int i,l,n,j;
    while(gets(c))
    {
        n=-1;
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]==' ')
            {
                for(j=i-1;j>n;j--)
                {
                    printf("%c",c[j]);
                }
                printf(" ");
                n=i;
            }
        }
        for(i=l-1;i>n;i--)
        {
            printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
