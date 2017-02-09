#include<bits/stdc++.h>
using namespace std;
#define inf 10e9
int main()
{
    string s;
    long long b[5],g[5],c[5],ans,temp;
    while(scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld",&b[1],&g[1],&c[1],&b[2],&g[2],&c[2],&b[3],&g[3],&c[3])!=EOF)
    {
        ans=inf;
        temp=b[2]+b[3]+c[1]+c[3]+g[1]+g[2];
        if(temp<ans)
        {
            ans=temp;
            s="BCG";
        }
        temp=b[2]+b[3]+g[1]+g[3]+c[1]+c[2];
        if(temp<ans)
        {
            ans=temp;
            s="BGC";
        }
        temp=c[2]+c[3]+b[1]+b[3]+g[1]+g[2];
        if(temp<ans)
        {
            ans=temp;
            s="CBG";
        }
        temp=c[2]+c[3]+g[1]+g[3]+b[1]+b[2];
        if(temp<ans)
        {
            ans=temp;
            s="CGB";
        }
        temp=g[2]+g[3]+b[1]+b[3]+c[1]+c[2];
        if(temp<ans)
        {
            ans=temp;
            s="GBC";
        }
        temp=g[2]+g[3]+c[1]+c[3]+b[1]+b[2];
        if(temp<ans)
        {
            ans=temp;
            s="GCB";
        }
        printf("%s %lld\n",s.c_str(),ans);
    }
    return 0;
}
