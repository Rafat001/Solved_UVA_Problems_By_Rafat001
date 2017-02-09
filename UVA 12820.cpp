#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,ans,flag,i,arr[256],l,cs=1;
    char c;
    string s;
    while(cin>>n)
    {
        ans=0;
        getchar();
        while(n--)
        {
            sum=flag=0;
            memset(arr,0,sizeof(arr));
            cin>>s;
            l=s.size();
            for(i=0;i<l;i++)
            {
                c=s[i];
                arr[c]++;
            }
            sort(arr,arr+256);
            for(i=255;i>=228;i--)
            {
                if(arr[i]!=0)
                    sum++;
                if(arr[i]==arr[i+1] && arr[i]!=0)
                    flag=1;
            }
            if(sum>=2 && flag==0)
                ans++;
        }
        printf("Case %d: %d\n",cs++,ans);
    }
}
