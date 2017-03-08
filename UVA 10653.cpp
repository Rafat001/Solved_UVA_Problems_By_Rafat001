#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f
#define ll long long
ll dist[1002][1002];
int a,b;
struct node
{
    int r;
    int c;
} nd,temp,tp;
queue<node>q;
int bfs(int x, int y)
{
    int i,mn,mx;
    dist[x][y]=0;
    nd.r=x, nd.c=y;
    q.push(nd);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp.c!=0 && dist[temp.r][temp.c-1]!=-1)
        {
            mn=dist[temp.r][temp.c]+1;
            mx=dist[temp.r][temp.c-1];
            if(mn<mx)
            {
                tp.c=temp.c-1;
                tp.r=temp.r;
                q.push(tp);
                dist[tp.r][tp.c]=mn;
            }
        }
        if(temp.r!=0 && dist[temp.r-1][temp.c]!=-1)
        {
            mn=dist[temp.r][temp.c]+1;
            mx=dist[temp.r-1][temp.c];
            if(mn<mx)
            {
                tp.c=temp.c;
                tp.r=temp.r-1;
                q.push(tp);
                dist[tp.r][tp.c]=mn;
            }
        }
        if(dist[temp.r][temp.c+1]!=-1 && temp.c+1 <=b)
        {
            mn=dist[temp.r][temp.c]+1;
            mx=dist[temp.r][temp.c+1];
            if(mn<mx)
            {
                tp.c=temp.c+1;
                tp.r=temp.r;
                q.push(tp);
                dist[tp.r][tp.c]=mn;
            }
        }
        if(dist[temp.r+1][temp.c]!=-1 && temp.r+1 <=a)
        {
            mn=dist[temp.r][temp.c]+1;
            mx=dist[temp.r+1][temp.c];
            if(mn<mx)
            {
                tp.c=temp.c;
                tp.r=temp.r+1;
                q.push(tp);
                dist[tp.r][tp.c]=mn;
            }
        }
    }
}
int main()
{
    int r,c,n,v,src_r,src_c,end_r,end_c,ans;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        memset(dist,inf,sizeof(dist));
        cin>>n;
        while(n--)
        {
            cin>>r>>c;
            while(c--)
            {
                cin>>v;
                dist[r][v]=-1;
            }
        }
        cin>>src_r>>src_c>>end_r>>end_c;
        bfs(src_r,src_c);
        cout<<dist[end_r][end_c]<<endl;
    }
    return 0;
}
