#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int i,l,t;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(c);
        l=strlen(c);
        if(c[l-1]=='5'&&c[l-2]=='3')
            printf("-\n");
        else if(c[0]=='1'&&c[1]=='9'&&c[2]=='0')
            printf("?\n");
        else if(c[0]=='9'&&c[l-1]=='4'&&l>2)
            printf("*\n");
        else
            printf("+\n");
    }
    return 0;
}

