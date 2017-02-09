#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long fac[15]={0};
    fac[0]=1;
    int i,sum,n,j,k;
    for(i=1;i<15;i++)
        fac[i]=fac[i-1]*i;
    while(scanf("%d",&n)==1)
    {
        sum=0;
        j=14;
        while(n>0)
        {
            while(n>=fac[j])
            {
                n-=fac[j];
                sum++;
            }
            j--;
        }
        printf("%d\n",sum);
    }
    return 0;
}
