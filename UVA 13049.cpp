#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,n,cs=1,i,sum;
    char c[105],c1[105];
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        getchar();
        scanf("%s %s",c,c1);
        for(i=0;i<n;i++)
        {
            if(c[i]==c1[i])
                continue;
            else if((c[i]=='0' && c1[i]=='9')||(c[i]=='9'&&c1[i]=='0')||(abs(c[i]-c1[i])==1))
            {
                sum++;
                continue;
            }
            else if(abs(c[i]-c1[i])>5)
            {
                sum=sum+(10-abs(c[i]-c1[i]));
                continue;
            }
            else
            {
                sum=sum+abs(c[i]-c1[i]);
            }
        }
        printf("Case %d: %d\n",cs,sum);
        cs++;
    }
    return 0;
}

