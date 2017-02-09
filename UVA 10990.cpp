#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 2000005
bool numbers[Max];
ll phi[Max],dphi[Max];
int main()
{
    ll i,j,limit=sqrt(Max),p,flag,m,n,t,sum=0;
    for(i=1; i<Max; i++)
        phi[i]=i;
    numbers[0]=numbers[1]=1;
    for(i=2; i<Max; i+=2)
    {
        if(i!=2)
            numbers[i]=1;
        phi[i]=phi[i]/2;
    }
    for(i=3; i<=2000000; i+=2)
    {
        if(numbers[i]==0)
        {
            phi[i]--;
            for(j=2*i; j<=2000000; j+=i)
            {
                numbers[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
    map<ll,ll>mp;
    for(i=1; i<=2000000; i++)
    {
        flag=0;
        p=i;
        while(phi[p]!=1)
        {
            p=phi[p];
            dphi[i]++;
            if(dphi[p]!=0)
            {
                flag=1;
                dphi[i]+=dphi[p];
                break;
            }
        }
        if(flag==0)
            dphi[i]++;
    }
    for(i=2; i<=2000000; i++)
    {
        sum+=dphi[i];
        mp[i]=sum;
    }
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&m,&n);
        printf("%lld\n",mp[n]-mp[m-1]);
    }
    return 0;
}
