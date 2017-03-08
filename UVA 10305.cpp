#include<bits/stdc++.h>
using namespace std;
bool arr[101][101],visit[101];
stack<int>q;
int n,m;
void dfs(int src)
{
    for(int i=1;i<=n;i++)
    {
        if(arr[src][i]==true && visit[i]==false)
        {
            visit[i]=true;
            dfs(i);
        }
    }
    q.push(src);
}
int main()
{
    //freopen("output.txt","w",stdout);
    int u,v,a;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        memset(arr,false,sizeof(arr));
        memset(visit,false,sizeof(visit));
        for(int i=1; i<=m; i++)
        {
            scanf("%d%d",&u,&v);
            arr[u][v]=true;
        }
        for(int i=1;i<=n;i++)
        {
            if(visit[i]==false)
            {
                visit[i]=true;
                dfs(i);
            }
        }
        while(!q.empty())
        {
            a=q.top();
            q.pop();
            if(!q.empty())
            cout<<a<<" ";
            else
                cout<<a;
        }
        printf("\n");
    }
}
