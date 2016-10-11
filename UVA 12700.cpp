#include<stdio.h>
int main()
{
    char c[15];
    int t,i,BD,WW,Tie,Abandoned,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        BD=WW=Tie=Abandoned=0;
        scanf("%d",&n);
        getchar();
        gets(c);
        for(j=0;j<n;j++)
        {
            if(c[j]=='B')
            {
                BD++;
            }
            else if(c[j]=='W')
            {
                WW++;
            }
            else if(c[j]=='A')
            {
                Abandoned++;
            }
            else if(c[j]=='T')
            {
                Tie++;
            }
        }
        if(BD+Abandoned==n && BD!=0)
            printf("Case %d: BANGLAWASH\n",i);
        else if(WW+Abandoned==n && WW!=0)
            printf("Case %d: WHITEWASH\n",i);
        else if(BD>WW)
            printf("Case %d: BANGLADESH %d - %d\n",i,BD,WW);
        else if(WW>BD)
            printf("Case %d: WWW %d - %d\n",i,WW,BD);
        else if(Abandoned==n)
            printf("Case %d: ABANDONED\n",i);
        else if(BD==WW)
            printf("Case %d: DRAW %d %d\n",i,BD,Tie);
    }
}
