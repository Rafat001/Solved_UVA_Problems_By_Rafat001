#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int l,i,l1,flag=0,cs=1;
    while(cin>>s>>s1)
    {
        flag=0;
        l=s.size(),l1=s1.size();
        if(l>l1)
        {
            while(s1.size()!=l)
            {
                s1+='0';
            }
        }
        else
        {
            while(s.size()!=l1)
            {
                s+='0';
            }
        }
        l=max(l,l1);
        for(i=0;i<l;i++)
        {
            if(s[i]>s1[i])
            {
                flag=1;
                break;
            }
            if(s[i]<s1[i])
            {
                flag=2;
                break;
            }
        }
        if(flag==0)
            printf("Case %d: Same\n",cs++);
        else if(flag==1)
            printf("Case %d: Bigger\n",cs++);
        else
            printf("Case %d: Smaller\n",cs++);
    }
}
