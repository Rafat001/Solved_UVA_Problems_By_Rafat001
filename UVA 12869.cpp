#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long u,v,i,j,ans;
    while(scanf("%lld%lld",&u,&v)==2)
    {
        ans=0;
        if(u==0 && v==0)
            break;
        ans= (v/5)-(u/5);
        ans++;
        printf("%lld\n",ans);
    }
    return 0;
}
