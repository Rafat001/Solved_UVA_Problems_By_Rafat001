#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,p,q,m,pos;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        a=0,p=0,m=n,pos=0;
        while(n>0)
        {
            if(n&1)
                p++;
            if(p&1) // which means p is odd //
            {
                q=n&1;
                q<<=pos;
                a|=q;
            }
            pos++;
            n>>=1;
        }
        printf("%d %d\n",a,m-a);
    }
    return 0;
}
