#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int i,sum=0,j,k,l,a,b;
    string s,s1;
    for(i='1'; i<='9'; i++)
    {
        s=i;
        sum++;
        mp[s]=sum;
    }
    for(i='1'; i<='9'; i++)
    {
        for(j='0'; j<='9'; j++)
        {
            s=i;
            s+=j;
            if(i!=j)
                sum++;
            mp[s]=sum;
        }
    }
    for(i='1'; i<='9'; i++)
    {
        for(j='0'; j<='9'; j++)
        {
            for(k='0'; k<='9'; k++)
            {
                s=i;
                s+=j;
                s+=k;
                if(i!=j && j!=k && i!=k)
                    sum++;
                mp[s]=sum;
            }
        }
    }
    for(i='1'; i<='4'; i++)
    {
        for(j='0'; j<='9'; j++)
        {
            for(k='0'; k<='9'; k++)
            {
                for(l='0'; l<='9'; l++)
                {
                    s=i;
                    s+=j;
                    s+=k;
                    s+=l;
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
                        sum++;
                    mp[s]=sum;
                }
            }
        }
    }
    mp["5000"]=sum;
    stringstream ss;
    while(cin>>a>>b)
    {
        a--;
        ss.clear();
        ss<<a;
        ss>>s;
        ss.clear();
        ss<<b;
        ss>>s1;
        printf("%d\n",mp[s1]-mp[s]);
    }
    return 0;
}
