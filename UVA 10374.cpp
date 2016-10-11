#include<stdio.h>
#include<string.h>
int main()
{
    char c[50][100],d[50][100],s[100];
    int i,l,n,j,t,m,frequency[100]= {0},maxx,k,maximum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        int flag=0;
        for(j=0;j<100;j++)
        {
            frequency[j]=0;
        }
        maxx=0;
        maximum=0;
        scanf("%d",&n);
        while(getchar()!='\n');
        for(j=0; j<n; j++)
        {
            gets(c[j]);
            gets(d[j]);
        }
        scanf("%d",&m);
        while(getchar()!='\n');
        for(j=0; j<m; j++)
        {
            gets(s);
            for(k=0; k<n; k++)
            {
                if(strcmp(s,c[k])==0)
                {
                    frequency[k]++;
                    if(frequency[k]>maximum)
                    {
                        maxx=k;
                        maximum=frequency[k];
                    }
                    break;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            if(frequency[j]==maximum)
            {
                flag++;
            }
        }
        if(flag>1)
            printf("tie\n");
        else
            printf("%s\n",d[maxx]);
        if(i!=t-1)
            printf("\n");
    }
    return 0;
}
