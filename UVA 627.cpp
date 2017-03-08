#include<bits/stdc++.h>
using namespace std;
vector<int>vv[305];
queue<int>q;
int visit[305],parent[305];
bool bfs(int src,int v)
{
    int i,node,temp;
    q.push(src);
    visit[src]=1;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        for(i=0; i<vv[temp].size(); i++)
        {
            node=vv[temp][i];
            if(visit[node]==0)
            {
                visit[node]=1;
                q.push(node);
                parent[node]=temp;
            }
        }
    }
    if(visit[v]==0)
        return false;
    else
        return true;
}
int main()
{
    int n,p,l,nd,a,i,u,v,x,y;
    bool flag;
    string s;
    stack<int>st;
    while(cin>>n)
    {
        while(n--)
        {
            s.clear();
            p=0;
            nd=0;
            cin>>s;
            l=s.size();
            while(s[p]!='-' && p<l)
            {
                nd*=10;
                nd+=(s[p]-'0');
                p++;
            }
            p++;
            while(p<l)
            {
                a=0;
                while(s[p]<='9'&&s[p]>='0')
                {
                    a*=10;
                    a+=(s[p]-'0');
                    p++;
                }
                if(a!=0)
                    vv[nd].push_back(a);
                p++;
            }
        }
        cin>>n;
        printf("-----\n");
        while(n--)
        {
            memset(visit,0,sizeof(visit));
            memset(parent,0,sizeof(parent));
            cin>>u>>v;
            flag=bfs(u,v);
            if(flag==false)
                cout<<"connection impossible"<<endl;
            else
            {
                y=v;
                while(y!=u)
                {
                    st.push(y);
                    y=parent[y];
                }
                st.push(y);
                while(!st.empty())
                {
                    cout<<st.top();
                    if(st.size()!=1)
                        cout<<" ";
                    st.pop();
                }
                cout<<endl;
            }
        }
        for(i=0; i<300; i++)
            vv[i].clear();
    }
    return 0;
}
