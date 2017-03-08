#include<bits/stdc++.h>
using namespace std;
vector<int>v[2505];
bool visit[2505];
long long dist[2505];
map<long long,long long>mp;
queue<int>q;
int e,day;
int bfs(int src)
{
    int temp,node,i,maxx=0;
    q.push(src);
    visit[src]=1;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        for(i=0;i<v[temp].size();i++)
        {
            node=v[temp][i];
            if(visit[node]==0)
            {
                visit[node]=1;
                q.push(node);
                dist[node]=dist[temp]+1;
                mp[dist[node]]++;
            }
        }
    }
    for(i=0;i<e;i++)
    {
        if(mp[i]>maxx)
        {
            maxx=mp[i];
            day=i;
        }
    }
    return maxx;
}
int main()
{
    int n,i,j,a,t,maxx;
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&a);
            v[i].push_back(a);
        }
    }
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        memset(visit,0,sizeof(visit));
        memset(dist,0,sizeof(dist));
        mp.clear();
        scanf("%d",&a);
        maxx=bfs(a);
        if(maxx==0)
            cout<<0<<endl;
        else
            cout<<maxx<<" "<<day<<endl;
    }
    return 0;
}
