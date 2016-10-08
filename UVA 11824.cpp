#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,k,j,sum;
    double land[1005]={0},p;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        k=0,sum=0,p=0;
        while(scanf("%lld",&n)==1)
        {
            if(n==0)
                break;
            land[k]=n;
            k++;
        }
        sort(land,land+k);
        double power=1;
        for(j=k-1;j>=0;j--)
        {
            p=pow(land[j],power);
            sum=sum+(2*p);
            power++;
        }
        if(sum<=5000000)
        {
            printf("%lld\n",sum);
        }
        else
            printf("Too expensive\n");
    }
    return 0;
}
