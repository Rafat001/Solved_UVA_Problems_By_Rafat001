#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int t,i;
    double x0,y0,x1,y1,cx,cy,r,len,wid;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf",&x0,&y0,&x1,&y1,&cx,&cy,&r);
        len=x1-x0;
        wid=y1-y0;
        if((5*wid==3*len)&&(len==5*r)&&(20*(cx-x0)==9*len)&&(2*(cy-y0)==wid))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
