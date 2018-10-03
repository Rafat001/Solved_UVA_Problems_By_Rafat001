#include<bits/stdc++.h>
using namespace std;
#define MX 100005
#define ll long long
bool num[MX];
void sieve()
{
    num[0]=num[1]=1;
    for(int i=4; i<MX; i+=2)
        num[i]=1;
    for(int i=3; i<=sqrt(MX); i+=2)
    {
        if(num[i]==0)
        {
            for(int j=i*i; j<MX; j+=i)
                num[j]=1;
        }
    }
}
ll BigMod(ll a, ll b, ll m)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
            ans=ans*a%m;
        a=a*a%m;
        b>>=1;
    }
    return ans;
}
int main()
{
    sieve();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            return 0;
        bool flag=false;
        if(num[n]==1)
        {
            for(int i=2; i<n; i++)
            {
                ll val=BigMod(i,n,n);
                if(val==i)
                    continue;
                else
                {
                    printf("%d is normal.\n",n);
                    flag=true;
                    break;
                }
            }
            if(flag==false)
                printf("The number %d is a Carmichael number.\n",n);
        }
        else
            printf("%d is normal.\n",n);
    }
}
