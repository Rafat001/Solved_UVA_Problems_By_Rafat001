#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,len,M,A,R,G,I,T,sum,limit;
    char c[605];
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        M=A=R=G=I=T=sum=0;
        gets(c);
        len=strlen(c);
        limit=len/9;
        for(j=0; j<len; j++)
        {
            if(c[j]=='M')
                M++;
            else if(c[j]=='A')
                A++;
            else if(c[j]=='R')
                R++;
            else if(c[j]=='G')
                G++;
            else if(c[j]=='I')
                I++;
            else if(c[j]=='T')
                T++;
        }
        for(j=0;j<=limit;j++)
        {
            if(M>=1 && A >=3 && R>=2 && G>=1 && I>=1 && T>=1)
            {
                sum++;
                M--;
                A-=3;
                R-=2;
                G--;
                I--;
                T--;
            }
        }
        printf("%d\n",sum);
    }
}
