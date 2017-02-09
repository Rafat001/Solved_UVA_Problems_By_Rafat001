#include<bits/stdc++.h>
using namespace std;
#define clear_c memset(c,'\0',sizeof(c))
int main()
{
    int n,m,cs=1,ans,i,j,flag=0;
    char c[105][105];
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        if(flag==1)
            cout<<endl;
        while(getchar()!='\n');
        clear_c;
        for(i=0;i<n;i++)
            gets(c[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                ans=0;
                if(c[i][j]=='.')
                {
                    if(c[i][j+1]=='*')
                        ans++;
                    if(c[i+1][j]=='*')
                        ans++;
                    if(c[i+1][j+1]=='*')
                        ans++;
                    if(i!=0 && c[i-1][j]=='*')
                        ans++;
                    if(i!=0 && c[i-1][j+1]=='*')
                        ans++;
                    if(j!=0 && c[i][j-1]=='*')
                        ans++;
                    if(j!=0 && c[i+1][j-1]=='*')
                        ans++;
                    if(i!=0 && j!=0 && c[i-1][j-1]=='*')
                        ans++;
                    c[i][j]=ans+'0';
                }
            }
        }
        printf("Field #%d:\n",cs++);
        for(i=0;i<n;i++)
            puts(c[i]);
        flag=1;
    }
    return 0;
}
