#include<bits/stdc++.h>
using namespace std;
char arr[105][105];
bool visit[105][105];
void dfs(int i, int j)
{
    if(arr[i][j]=='1' && visit[i][j]==0)
    {
        //cout<<i<<" "<<j<<" visit korlam\n";
        visit[i][j]=true;
        if(arr[i][j+1]=='1' && visit[i][j+1]==0)
            dfs(i,j+1);
        if(arr[i+1][j+1]=='1' && visit[i+1][j+1]==0)
            dfs(i+1,j+1);
        if(arr[i+1][j]=='1' && visit[i+1][j]==0)
            dfs(i+1,j);
        if(i!=0 && arr[i-1][j+1]=='1' && visit[i-1][j+1]==0)
            dfs(i-1,j+1);
        if(i!=0 && arr[i-1][j]=='1' && visit[i-1][j]==0)
            dfs(i-1,j);
        if(j!=0 && i!=0 && arr[i-1][j-1]=='1' && visit[i-1][j-1]==0)
            dfs(i-1,j-1);
        if(j!=0 && arr[i+1][j-1]=='1' && visit[i+1][j-1]==0)
            dfs(i+1,j-1);
        if(j!=0 && arr[i][j-1]=='1' && visit[i][j-1]==0)
            dfs(i,j-1);
    }
    return;
}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,j,sum,cs=1;
    while(cin>>n)
    {
        sum=0;
        memset(arr,'\0',sizeof(arr));
        memset(visit,'\0',sizeof(visit));
        for(i=0; i<n; i++)
        {
            scanf("%s",arr[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(arr[i][j]=='1' && visit[i][j]==false)
                {
                    //cout<<i<<" "<<j<<endl;
                    dfs(i,j);
                    sum++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",cs++,sum);
    }
    return 0;
}
