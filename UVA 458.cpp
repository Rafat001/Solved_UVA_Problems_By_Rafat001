#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int i;
    while(gets(c)!='\0')
    {
        for(i=0;i<strlen(c);i++)
        {
            c[i]=c[i]-7;
            printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
