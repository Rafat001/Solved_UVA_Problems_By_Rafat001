#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,i,flag,ans,j;
    while(scanf("%d%d",&n,&m)==2)
    {
        ans=0;
        for(i=1; i<=n; i++)
        {
            flag=0;
            for(j=1; j<=m; j++)
            {
                scanf("%d",&a);
                if(a==0)
                    flag=1;
            }
            if(flag==0)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
