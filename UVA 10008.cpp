#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l,arr[256]={0},j,maxx;
    char c[1005];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(c);
        l=strlen(c);
        for(j=0;j<l;j++)
        {
            if(c[j]>='A'&&c[j]<='Z')
            {
                c[j]+=32;
            }
        }
        for(j=0;j<l;j++)
        {
            if(c[j]>='a'&&c[j]<='z')
            {
                arr[c[j]]++;
                if(arr[c[j]]>maxx)
                {
                    maxx=arr[c[j]];
                }
            }
        }
    }
    for(i=maxx;i>0;i--)
    {
        for(j='a';j<='z';j++)
        {
            if(arr[j]==i)
                printf("%c %d\n",j-32,i);
        }
    }
    return 0;
}
