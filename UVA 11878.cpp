#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    int sum=0,i,l,a,b,d,k,j;
    while(gets(c))
    {
        a=b=d=0;
        l=strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i]=='+'||c[i]=='-')
            {
                j=i;
                break;
            }
            else
            {
                a=a*10+(c[i]-'0');
            }
        }
        for(i=j+1; i<l; i++)
        {
            if(c[i]=='=')
            {
                k=i;
                break;
            }
            else
            {
                b=b*10+(c[i]-'0');
            }
        }
        for(i=k+1; i<l; i++)
        {
                d=d*10+(c[i]-'0');
        }
        if(a+b==d || a-b==d)
        {
            sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}

