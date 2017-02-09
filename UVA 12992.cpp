#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=(n-1)*2;
        n+=1;
        printf("Case #%d: %d\n",cs++,n);
    }
}
