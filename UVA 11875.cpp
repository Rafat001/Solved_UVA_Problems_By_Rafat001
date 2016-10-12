#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[15],i,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<"Case "<<cs<<": "<<a[n/2]<<endl;
        cs++;
    }
    return 0;
}
