#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,f;
    double sz,an,dg,avg,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>f;
        while(f--)
        {
            cin>>sz>>an>>dg;
            avg=sz/an;
            avg*=dg;
            avg*=an;
            ans+=avg;
        }
        printf("%.0lf\n",ans);
    }
    return 0;
}
