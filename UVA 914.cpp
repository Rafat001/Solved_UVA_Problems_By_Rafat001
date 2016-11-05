#include<bits/stdc++.h>
using namespace std;
#define Max 1000005
int numbers[Max],ans[Max],aaa[Max];
int main()
{
    int m,n,i,j,a,b,k,p;
    numbers[0]=numbers[1]=1;
    for(i=4; i<Max; i+=2)
    {
        numbers[i]=1;
    }
    int limit=sqrt(Max);
    for(i=3; i<=limit; i++)
    {
        if(numbers[i]==0)
        {
            for(j=i*i; j<Max; j+=i)
            {
                numbers[j]=1;
            }
        }
    }
    int t;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        k=0,p=0;
        int flag=0;
        scanf("%d%d",&a,&b);
        memset(ans,0,sizeof(ans));
        memset(aaa,0,sizeof(aaa));
        int maxx=0,total=0;
        stack<int>st;
        for(i=a; i<=b; i++)
        {
            if(numbers[i]==1)
                continue;
            st.push(i);
            p++;
        }
        a=0,b=0;
        while(!st.empty())
        {
            b=st.top();
            st.pop();
            if(!st.empty())
                a=st.top();
            ans[b-a]++;
            if(ans[b-a]>maxx)
            {
                maxx=ans[b-a];
                total=b-a;
            }
            if(ans[b-a]==maxx)
            {
                aaa[k]=maxx;
                k++;
            }
        }
        for(i=0;i<k;i++)
        {
            if(aaa[i]==maxx)
                flag++;
        }
        if((maxx<=1 || flag>1)&&(p>2))
            printf("No jumping champion\n");
        else if(maxx==0 || p==1)
            printf("No jumping champion\n");
        else
         printf("The jumping champion is %d\n",total);
    }
    return 0;
}
