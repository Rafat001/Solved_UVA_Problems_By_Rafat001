#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,l;
    char a,b,c;
    cin>>t;
    string s;
    map<char,char>mp;
    while(getchar()!='\n');
    while(t--)
    {
        mp['_']='_';
        for(i='A';i<='Z';i++)
        {
            mp[i]=i;
        }
        cin>>s;
        cin>>n;
        getchar();
        while(n--)
        {
            cin>>a>>b;
            for(i='A';i<='Z';i++)
            {
                c=i;
                if(mp[i]==b)
                    {
                        mp[i]=a;
                    }
            }
        }
        l=s.size();
        for(i=0;i<l;i++)
        {
            cout<<mp[s[i]];
        }
        cout<<endl;
        s.clear();
        mp.clear();
    }
    return 0;
}
