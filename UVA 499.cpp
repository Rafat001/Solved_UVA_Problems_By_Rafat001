#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[200],ans[100];
    int i,l,maxx,k,freq[200];
    while(gets(c))
    {
        k=0;
        maxx=0;
        memset(freq,0,sizeof(freq));
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            freq[c[i]]++;
            if((freq[c[i]]>maxx)&&((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')))
                maxx=freq[c[i]];
        }
        for(i=0;i<l;i++)
        {
            if((freq[c[i]]==maxx) &&((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')))
            {
                ans[k]=c[i];
                k++;
                freq[c[i]]=0;
            }
        }
        sort(ans,ans+k);
        for(i=0;i<k;i++)
        {
            printf("%c",ans[i]);
        }
        printf(" %d\n",maxx);
    }
    return 0;
}
