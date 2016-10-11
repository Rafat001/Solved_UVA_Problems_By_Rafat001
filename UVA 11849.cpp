#include<stdio.h>
int main()
{
    int jack,jill,i,sum,j;
    while(scanf("%d%d",&jack,&jill)==2)
    {
        if(jack==0 && jill==0)
            break;
        sum=0;
        int a[jack+1],b[jill+1];
        for(i=0; i<jack; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<jill; i++)
        {
            scanf("%d",&b[i]);
        }
        i=0,j=0;
        while(jack>i && jill>j)
        {
            if(a[i]<b[j])
                i++;
            else if(a[i]>b[j])
                j++;
            else
            {
                sum++;
                i++;
                j++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
