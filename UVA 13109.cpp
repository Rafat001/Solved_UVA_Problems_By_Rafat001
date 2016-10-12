#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,weight[100005],high,t,sum,count,i;
    cin>>t;
    while(t--)
    {
        count=0,sum=0;
        memset(weight,'0',sizeof(weight));
        cin>>e>>high;
        for(i=0;i<e;i++)
        {
            cin>>weight[i];
        }
        sort(weight,weight+e);
        for(i=0;i<e;i++)
        {
            sum=sum+weight[i];
            if(sum<=high)
            {
                count++;
            }
            if(sum>high)
                break;
        }
        cout<<count<<"\n";
    }
    return 0;
}
