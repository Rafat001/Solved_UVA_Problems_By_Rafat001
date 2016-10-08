#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j,k=0,maxx=0;
    char c[101][101];
    for(i=0;i<101;i++)
    {
        for(j=0;j<101;j++)
        {
            c[i][j]=' ';
        }
    }
    while(gets(c[k]))
    {
        l=strlen(c[k]);
        c[k][l]=' ';
        if(l>maxx)
            maxx=l;
        k++;
    }
    k--;
    for(i=0; i<maxx; i++)
    {
        for(j=k;j>=0;j--)
        {
            printf("%c",c[j][i]);
        }
        printf("\n");
    }
    return 0;
}
