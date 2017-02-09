#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double x,y,r,l;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>r;
        l=sqrt((x-0)*(x-0)+(y-0)*(y-0));
        printf("%.2lf %.2lf\n",r-l,l+r);
    }
    return 0;
}
