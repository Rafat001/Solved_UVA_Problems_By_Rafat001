#include<bits/stdc++.h>
using namespace std;
int visit[105][105],even,odd,r,c,m,n,visit1[105][105];
struct node
{
    int r;
    int c;
}temp,nd;
queue<node>q;
void bfs(int x, int y)
{
    int rw,cl,flag=0;
    nd.r=x;
    nd.c=y;
    q.push(nd);
    while(!q.empty())
    {
        memset(visit1,0,sizeof(visit1));
        flag=0;
        temp=q.front();
        q.pop();
        rw=temp.r-m;
        cl=temp.c+n;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1)&& visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        rw=temp.r-m;
        cl=temp.c-n;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1)&& visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        rw=temp.r-n;
        cl=temp.c+m;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1)&& visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        rw=temp.r+n;
        cl=temp.c+m;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1)&& visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        rw=temp.r+m;
        cl=temp.c+n;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1)&& visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        rw=temp.r+m;
        cl=temp.c-n;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1)&& visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        rw=temp.r-n;
        cl=temp.c-m;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1)&& visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        rw=temp.r+n;
        cl=temp.c-m;
        if((rw>=0 && rw<=r-1)&&(cl>=0 && cl<=c-1) && visit[rw][cl]!=-1 && visit1[rw][cl]==0)
        {
            flag++;
            visit1[rw][cl]=1;
            if(visit[rw][cl]==0)
            {
                nd.r=rw;
                nd.c=cl;
                q.push(nd);
                visit[rw][cl]=1;
            }
        }
        if(flag%2==0)
            even++;
        else
            odd++;
    }
}
int main()
{
    int t,cs,i,x,y,u,v,j,p;
    cin>>t;
    for(cs=1; cs<=t; cs++)
    {
        even=odd=0;
        cin>>r>>c>>m>>n;
        memset(visit,0,sizeof(visit));
        cin>>p;
        while(p--)
        {
            cin>>x>>y;
            visit[x][y]=-1;
        }
        visit[0][0]=1;
        bfs(0,0);
        printf("Case %d: %d %d\n",cs,even,odd);
    }
    return 0;
}
