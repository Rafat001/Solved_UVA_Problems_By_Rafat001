#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,k,l,j;
    char c[105][105];
    scanf("%d",&t);
    while(getchar()!='\n');
    for(i=1; i<=t; i++)
    {
        k=0;
        while(gets(c[k]))
        {
            l=strlen(c[k]);
            if(l==0)
                break;
            for(j=0; j<l; j++)
            {
                if(c[k][j]=='1')
                    c[k][j]='I';
                else if(c[k][j]=='2')
                    c[k][j]='Z';
                else if(c[k][j]=='3')
                    c[k][j]='E';
                else if(c[k][j]=='4')
                    c[k][j]='A';
                else if(c[k][j]=='5')
                    c[k][j]='S';
                else if(c[k][j]=='6')
                    c[k][j]='G';
                else if(c[k][j]=='7')
                    c[k][j]='T';
                else if(c[k][j]=='8')
                    c[k][j]='B';
                else if(c[k][j]=='9')
                    c[k][j]='P';
                else if(c[k][j]=='0')
                    c[k][j]='O';
            }
            k++;
        }
        for(j=0;j<k;j++)
        {
            puts(c[j]);
        }
        if(i!=t)
            printf("\n");
    }
    return 0;
}
