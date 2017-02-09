#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        printf("%lld\n",n*m-n*(n+1)/2);
    }
    return 0;
}
