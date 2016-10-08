#include<stdio.h>
int main()
{
    int T,i,N[100],j,max,a;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        max=0;
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
            scanf("%d",&N[j]);
            if(N[j]>max)
            {
                max=N[j];
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
