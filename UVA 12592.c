#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j;
    char c[1000][1000],s[1000][1000];
    scanf("%d",&a);
    for(i=0; i<=a*2; i++)
    {
        gets(c[i]);
    }
    scanf("%d",&b);
    getchar();
    for(i=0; i<b; i++)
    {
        gets(s[i]);
        for(j=1; j<=a*2; j+=2)
        {
            if(strcmp(s[i],c[j])==0)
            {
                printf("%s\n",c[j+1]);
                break;
            }
        }
    }
    return 0;
}
