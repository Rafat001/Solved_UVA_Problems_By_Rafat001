#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, ll> mp;
int p;
ll mod_fib(ll n)
{
    ll a,b,c;
    if(mp[n]!=0)
        return mp[n];
    ll k=n/2;
    if (n%2==0)
    {
        a=mod_fib(k);
        b=mod_fib(k-1);
        return mp[n] = (a*a+b*b) % p;
    }
    else
    {
        a=mod_fib(k);
        b=mod_fib(k-1);
        c=mod_fib(k+1);
        return mp[n] = (a*c + a*b) % p;
    }
}
int main()
{
    ll n,m;
    while (scanf("%lld%lld",&n,&m)==2)
    {
        mp[0]=mp[1]=1;
        p=pow(2,m);
        if(n==0)
            printf("0\n");
        else if(n<=2)
            printf("%lld\n",1%p);
        else
            printf("%lld\n",mod_fib(n-1));
        mp.clear();
    }
    return 0;
}

