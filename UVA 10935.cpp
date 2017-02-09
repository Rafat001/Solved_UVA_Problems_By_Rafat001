#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i;
    vector<int>vv;
    queue<int>st;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=1; i<=n; i++)
            st.push(i);
        while(st.size()!=1)
        {
            vv.push_back(st.front());
            st.pop();
            a=st.front();
            st.pop();
            st.push(a);
        }
        printf("Discarded cards:");
        for(i=0; i<vv.size(); i++)
        {
            if(i==0)
                printf(" %d",vv[i]);
            else
                printf(", %d",vv[i]);
        }
        printf("\n");
        printf("Remaining card: %d\n",st.front());
        st.pop();
        vv.clear();
    }
    return 0;
}
