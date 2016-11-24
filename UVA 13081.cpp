#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,temp;
    long long l,r,j,ans,a,b;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        a=0,b=0,ans=1;
        cin>>l>>r;
        if(l>r)
        {
            temp=l;
            l=r;
            r=temp;
        }
        if(l==0 && r==0)
            ans=1;
        else if(l==r)
        {
                if(l%4==0)
                    a=l+1;
                else if(l%4!=0 && l%2==0)
                    a=l;
                else if((l+1)%4==0 || l==0)
                    a=1;
                else if(l%2!=0)
                    a=0;
                b=a;
                ans=a&b;
        }
        else
        {
            if(r-l>=2)
                ans=0;
            if(r-l==1)
            {
                if(l%4==0)
                    a=l+1;
                else if(l%4!=0 && l%2==0)
                    a=l;
                else if((l+1)%4==0 || l==0)
                    a=1;
                else if(l%2!=0)
                    a=0;
                if(r%4==0)
                    b=r+1;
                else if(r%4!=0 && r%2==0)
                    b=r;
                else if((r+1)%4==0 || r==0)
                    b=1;
                else if(r%2!=0)
                    b=0;
                ans=a&b;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
