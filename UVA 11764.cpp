#include<stdio.h>
int main()
{
    int i,j,T,N,high=0,low=0,height[50],m=1;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);

        for(j=1; j<=N; j++)
        {
            scanf("%d",&height[j]);
        }
        for(j=2; j<=N; j++)
        {
            if(height[j]>height[j-1])
            {
                high++;
            }
            else if(height[j]<height[j-1])
            {
                low++;
            }
        }
        printf("Case %d: %d %d\n",m,high,low);
        m++;
        high=0;
        low=0;
    }
    return 0;
}
