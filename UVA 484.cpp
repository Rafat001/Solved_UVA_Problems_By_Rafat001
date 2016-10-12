#include<stdio.h>
long long arr[10000000],start[10000000];
int main()
{
    long long n,i,k=0;
    while(scanf("%lld",&n)==1)
    {
        if(arr[n]==0)
        {
            start[k]=n;
            k++;
        }
        arr[n]++;
    }
    for(i=0; i<k; i++)
    {
        printf("%lld %lld\n",start[i],arr[start[i]]);
    }
    return 0;
}
