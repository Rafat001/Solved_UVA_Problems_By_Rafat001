#include<bits/stdc++.h>
using namespace std;
#define Mx 101
int arr[Mx],brr[Mx],n,n1;
bool visit[Mx][Mx];
int dp[Mx][Mx],ans;
int lcs(int i,int j)
{
    if(arr[i]==0 || brr[j]==0)
        return 0;
    if(visit[i][j])
        return dp[i][j];
    if(arr[i]==brr[j])
        ans=1+lcs(i+1,j+1);
    else
        ans=max(lcs(i+1,j),lcs(i,j+1));
    visit[i][j]=1;
    dp[i][j]=ans;
    return ans;
}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,n1,i,a,cs=1;
    while(scanf("%d%d",&n,&n1)==2)
    {
        ans=0;
        memset(arr,0,sizeof(arr));
        memset(brr,0,sizeof(brr));
        memset(visit,0,sizeof(visit));
        memset(dp,0,sizeof(dp));
        if(n==0 && n1==0)
            break;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<n1; i++)
        {
            scanf("%d",&brr[i]);
        }
        printf("Twin Towers #%d\n",cs++);
        printf("Number of Tiles : %d\n\n",lcs(0,0));
    }
    return 0;
}
