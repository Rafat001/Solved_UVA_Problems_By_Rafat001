#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=32,i,a,t,n,j,ans;
    map<string,int>mp;
    stringstream ss;
    string s,s1;
    for(i=p; i<=99; i++)
    {
        a=i*i;
        ss.clear();
        ss<<a;
        ss>>s;
        mp[s]=i;
    }
    cin>>t;
    for(i=1; i<=t; i++)
    {
        ans=0;
        cin>>s;
        s1=s;
        for(j='1'; j<='9'; j++)
        {
            if(j!=s[0])
            {
                s1[0]=j;
                if(mp[s1]!=0)
                    ans++;
            }
        }
        s1=s;
        for(j='0'; j<='9'; j++)
        {
            if(j!=s[1])
            {
                s1[1]=j;
                if(mp[s1]!=0)
                    ans++;
            }
        }
        s1=s;
        for(j='0'; j<='9'; j++)
        {
            if(j!=s[2])
            {
                s1[2]=j;
                if(mp[s1]!=0)
                    ans++;
            }
        }
        s1=s;
        for(j='0'; j<='9'; j++)
        {
            if(j!=s[3])
            {
                s1[3]=j;
                if(mp[s1]!=0)
                    ans++;
            }
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
