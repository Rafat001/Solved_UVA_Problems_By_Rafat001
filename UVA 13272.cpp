#include<bits/stdc++.h>
using namespace std;
int ans[100005];
int main()
{
    int t,u,v;
    string s;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        memset(ans,0,sizeof(ans));
        cin>>s;
        int l=s.size();
        stack<char>st;
        for(int i=l-1; i>=0; i--)
        {
            char c=s[i];
            //cout<<c<<" "<<st.size()<<endl;
            if(c==')' || c=='}' || c==']' || c=='>')
                st.push(c);
            else if(st.size()!=0)
            {
                char d=st.top();
                //st.pop();
                //cout<<c<<" "<<d<<" "<<abs(c-d)<<endl;
                if(abs(d-c)==1 || abs(d-c)==2)
                {
                    st.pop();
                    ans[i]=2;
                    if(ans[i+1]!=0)
                        ans[i]+=ans[i+1];
                    if(ans[i+ans[i]]!=0)
                        ans[i]+=ans[i+ans[i]];
                    //st.pop();
                }
                else
                {
                    while(!st.empty())
                        st.pop();
                }
                //cout<<"SSS";
            }
            //cout<<c<<endl;
        }
        printf("Case %d:\n",cs);
        for(int i=0; i<l; i++)
            cout<<ans[i]<<endl;
    }
}

