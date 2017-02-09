#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
long long arr[100005];
int main()
{
    long long s=0,i;
    int a;
    for(i=1;s<=inf;i++)
    {
        s+=i;
        arr[i]=i+arr[i-1];
        a=i;
    }
    int b,n,mid,loc;
    while(scanf("%d",&n)==1)
    {
        i=mid=loc=0;
        s=a;
        if(n==0)
            break;
        while(i<=s)
        {
            mid=(i+s)/2;
            if(arr[mid]>n)
            {
                loc=mid;
                s=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        printf("%lld %d\n",arr[loc]-n,loc);
    }
    return 0;
}
