#include<stdio.h>
#include<string.h>
int main()
{
    char a[6];
    int i=1;
    while(scanf("%s",a))
    {
        if(!strcmp(a,"*"))
        {
            break;
        }
        else if(!strcmp(a,"Hajj"))
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;
        }
        else if(!strcmp(a,"Umrah"))
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
        }
    }
    return 0;
}
