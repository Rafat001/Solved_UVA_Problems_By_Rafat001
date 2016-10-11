#include<stdio.h>
#include<string.h>
int main()
{
    char c[105],s[105];
    int l,maxx=0,i,k,flag=0;
    while(scanf("%s",c)!=EOF)
    {
        if(strcmp(c,"E-N-D")==0)
            break;
        int count=0;
        k=0;
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if((c[i]>='A' && c[i]<='Z')||(c[i]>='a'&&c[i]<='z')||(c[i]=='-'))
            {
                count++;
            }
        }
        if(l>maxx && count>flag)
        {
            flag=0;
            memset(s,'\0',sizeof(s));
            maxx=l;
            for(i=0; i<maxx; i++)
            {
                if((c[i]>='A' && c[i]<='Z')||(c[i]>='a'&&c[i]<='z')||(c[i]=='-'))
                {
                    s[k]=c[i];
                    k++;
                    flag++;
                }
            }
        }
    }
    for(i=0; i<maxx; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    puts(s);
    return 0;
}
