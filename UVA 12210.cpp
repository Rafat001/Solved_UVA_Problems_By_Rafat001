
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,batch[10000],spin[10000],test=1;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==0&&b==0)
        {
            break;
        }
        else
        {
            for(i=0; i<a; i++)
            {
                scanf("%d",&batch[i]);
            }
            for(i=0; i<b; i++)
            {
                scanf("%d",&spin[i]);
            }
            sort(batch,batch+a);
            if(a<=b)
            {
                printf("Case %d: 0\n",test);
            }
            else
            {
                printf("Case %d: %d %d\n",test,a-b,batch[0]);
            }
        }
        test++;
    }
    return 0;
}
