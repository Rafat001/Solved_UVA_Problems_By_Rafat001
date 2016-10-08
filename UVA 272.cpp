#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,flag=0;
    char c[100000];
    while(gets(c))
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]==34)
            {
                flag=flag+1;
                if(flag%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
