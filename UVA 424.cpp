#include<stdio.h>
#include<string.h>
int main()
{
    char c[105][105],s[105];
    memset(c,'0',sizeof(c));
    memset(s,'\0',sizeof(s));
    int k=0,i,sum=0,l,maxx=0,j,m=0;
    while(gets(c[k]))
    {
        if(c[k][0]=='0'&&strlen(c[k])==1)
            break;

        l=strlen(c[k]);
        if(l>maxx)
            maxx=l;
        k++;
    }
    for(i=maxx-1; i>=0; i--)
    {
        for(j=0; j<=k; j++)
        {
            if(c[j][i]!='\0')
            {
                sum=sum+(c[j][i]-'0');
            }
        }
        s[m]=sum%10+'0';
        m++;
        sum=sum/10;
    }
    if(sum>0)
    {
        while(sum!=0)
        {
            s[m]=sum%10+'0';
            sum=sum/10;
            m++;
        }
    }
    for(i=m-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
