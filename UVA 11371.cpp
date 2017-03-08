#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //freopen("output.txt","w",stdout);
    string s,s1;
    ll a,b,n,k,i,flag;
    stringstream ss;
    while(cin>>s)
    {
        i=0;
        sort(s.begin(),s.end());
        s1=s;
        reverse(s1.begin(),s1.end());
        if(s[i]=='0')
        {
            while(s[i]=='0')
            {
                i++;
            }
            swap(s[0],s[i]);
        }
        ss.clear();
        ss<<s;
        ss>>a;
        ss.clear();
        ss<<s1;
        ss>>b;
        printf("%lld - %lld = %lld = 9 * %lld\n",b,a,b-a,(b-a)/9);
    }
    return 0;
}
