#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;
        if(a==b)
        {
            printf("0\n");
        }
        else if(a>b)
        {
            if(a-b>50)
            {
                printf("%d\n",(b+100)-a);
            }
            else
                printf("%d\n",a-b);
        }
        else if(b>a)
        {
            if(b-a>50)
            {
                printf("%d\n",(a+100)-b);
            }
            else
                printf("%d\n",b-a);
        }
    }
    return 0;
}
