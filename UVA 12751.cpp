#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,t,cs=1;
    long long total,ans,av;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&x);
        total= (n*(n+1))/2;
        av=(k*(x+(x+k-1)))/2;
        printf("Case %d: %lld\n",cs++,total-av);
    }
    return 0;
}
