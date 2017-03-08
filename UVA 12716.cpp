#include<bits/stdc++.h>
using namespace std;
int mp[30000005];
int main()
{
    int i,j,sum;
    for(i=1; i<=30000000; i++)
    {
        for(j=i*2; i+j<=30000000; j+=i)
        {
            sum=(i+j)&j;
            if(sum==j)
                mp[i+j]++;
        }
    }
    for(i=1;i<=30000000;i++)
    {
        mp[i]+=mp[i-1];
    }
    int t,n,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",cs++,mp[n]);
    }
    return 0;
}
