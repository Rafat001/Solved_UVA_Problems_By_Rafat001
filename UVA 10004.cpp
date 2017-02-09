#include<bits/stdc++.h>
using namespace std;
int visit[250];
vector<int>v[205];
bool bfs(int src)
{
    int flag,temp,node,i;
    memset(visit,-1,sizeof(visit));
    queue<int>qq;
    qq.push(src);
    visit[src]=0;
    while(!qq.empty())
    {
        flag=qq.front();
        qq.pop();
        if(visit[flag]==1)
            temp=0;
        if(visit[flag]==0)
            temp=1;
        for(i=0; i<v[flag].size(); i++)
        {
            node=v[flag][i];
            if(visit[node]==-1)
            {
                visit[node]=temp;
                qq.push(node);
            }
            if(visit[node]==visit[flag])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,a,j,b,c,flag=0,src,ans,temp,node,k;
    queue<int>qq;
    while(cin>>n)
    {
        if(n==0)
            break;
        memset(visit,-1,sizeof(visit));
        flag=ans=0;
        cin>>a;
        for(k=0; k<a; k++)
        {
            cin>>b>>c;
            if(flag==0)
            {
                flag=1;
                src=b;
            }
            v[b].push_back(c);
            v[c].push_back(b);
        }
        if(!bfs(src))
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
        for(i=0; i<205; i++)
            v[i].clear();
    }
    return 0;
}
