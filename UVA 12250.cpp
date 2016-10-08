#include<stdio.h>
#include<string.h>
int main()
{
    char s[15];
    int a=1;
    while(scanf("%s",s)!=EOF)
    {
        if(strcmp(s,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",a);
        }
        else if(strcmp(s,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",a);
        }
        else if(strcmp(s,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",a);
        }
        else if(strcmp(s,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",a);
        }
        else if(strcmp(s,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",a);
        }
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",a);
        }
        else if(strcmp(s,"#")==0)
        {
            break;
        }
        else
        {
            printf("Case %d: UNKNOWN\n",a);
        }
        a++;
    }
    return 0;
}
