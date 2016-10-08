#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,value,a[256]={0},n,line,sum,l,k,m;
    char ch[256],c[10005];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            getchar();
            scanf("%c %d",&ch[j],&value);
            a[ch[j]]=value;
        }
        scanf("%d",&line);
        getchar();
        for(j=0;j<line;j++)
        {
            gets(c);
            l=strlen(c);
            for(k=0;k<l;k++)
            {
                for(m=0;m<n;m++)
                {
                    if(c[k]==ch[m])
                    {
                        sum=sum+a[ch[m]];
                    }
                }
            }
        }
        printf("%.2lf$\n",(double)sum/100);
    }
    return 0;
}
