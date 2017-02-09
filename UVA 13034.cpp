#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,i,j,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        for(j=1;j<=13;j++)
        {
            cin>>a;
            if(a<1)
                flag=1;
        }
        if(flag==0)
            printf("Set #%d: Yes\n",i);
        else
            printf("Set #%d: No\n",i);
    }
    return 0;
}
