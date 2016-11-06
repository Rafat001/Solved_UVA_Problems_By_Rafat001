#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,flag,i,j,k,limit,m,digit,p,q,gg,l;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=n+1;; j++)
        {
            gg=flag=digit=0;
            m=p=q=j;
            limit=sqrt(p);
            for(k=2; k<=limit; k++)
            {
                while(p%k==0)
                {
                    if(k>9)
                    {
                        l=k;
                        while(l!=0)
                        {
                            flag+=l%10;
                            l=l/10;
                        }
                        p=p/k;
                        gg=1;
                    }
                    else
                    {
                        flag+=k;
                        p=p/k;
                        gg=1;
                    }
                }
            }
            if(p!=1 && gg==1)
            {
                while(p!=0)
                {
                    flag+=p%10;
                    p=p/10;
                }
            }
            while(m!=0)
            {
                digit+=m%10;
                m/=10;
            }
            if(digit==flag)
            {
                flag=q;
                break;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}
