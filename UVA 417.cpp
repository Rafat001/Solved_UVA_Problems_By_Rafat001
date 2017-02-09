#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    string s;
    //cin>>s;
    int i,j,k,l,m;
    char c='a';
    int sum=1;
    for(i='a'; i<='z'; i++)
    {
        s=i;
        mp[s]=sum++;
    }
    for(i='a'; i<='z'; i++)
    {
        for(j=i+1; j<='z'; j++)
        {
            s=i;
            s+=j;
            mp[s]=sum++;
        }
    }
    for(i='a'; i<='z'; i++)
    {
        for(j=i+1; j<='z'; j++)
        {
            for(k=j+1; k<='z'; k++)
            {
                s=i;
                s+=j;
                s+=k;
                mp[s]=sum++;
            }
        }
    }
    for(i='a'; i<='z'; i++)
    {
        for(j=i+1; j<='z'; j++)
        {
            for(k=j+1; k<='z'; k++)
            {
                for(l=k+1; l<='z'; l++)
                {
                    s=i;
                    s+=j;
                    s+=k;
                    s+=l;
                    mp[s]=sum++;
                }
            }
        }
    }
    for(i='a'; i<='z'; i++)
    {
        for(j=i+1; j<='z'; j++)
        {
            for(k=j+1; k<='z'; k++)
            {
                for(l=k+1; l<='z'; l++)
                {
                    for(m=l+1; m<='z'; m++)
                    {
                        s=i;
                        s+=j;
                        s+=k;
                        s+=l;
                        s+=m;
                        mp[s]=sum++;
                    }
                }
            }
        }
    }
    while(cin>>s)
        cout<<mp[s]<<endl;
    return 0;
}
