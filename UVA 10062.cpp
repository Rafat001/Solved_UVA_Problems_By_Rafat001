#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j,minn,line=0,maxx;
    char c[1005];
    while(gets(c))
    {
        if(line!=0)
            printf("\n");
        minn=1000000;
        maxx=0;
        int arr[129]={0};
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            arr[c[i]]++;
            if(arr[c[i]]<minn)
                minn=arr[c[i]];
            if(arr[c[i]]>maxx)
                maxx=arr[c[i]];
        }
        for(i=minn;i<=maxx;i++)
        {
            for(j=128;j>=32;j--)
            {
                if(arr[j]==i)
                    printf("%d %d\n",j,i);
            }
        }
        line++;
    }
    return 0;
}

