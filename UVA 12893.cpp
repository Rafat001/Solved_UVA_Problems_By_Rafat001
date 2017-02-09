#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        while(n>0)
        {
            if(n%2!=0)
            {
                n-=1;
                ans++;
            }
            n/=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

