#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ls=0,i,t,n,cs=1,ans,p,flag;
    char c;
    cin>>t;
    while(t--)
    {
        ans=flag=ls=0;
        cin>>n;
        p=n;
        while(n--)
        {
            cin>>c;
            if(c!='W')
                ls++;
            if(c=='W')
                ls=0;
            if(ls<=3 && flag==0)
                ans++;
            if(ls==3)
                flag=1;
        }
        printf("Case %d: ",cs++);
        if(ans==p && flag!=1)
            cout<<"Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
