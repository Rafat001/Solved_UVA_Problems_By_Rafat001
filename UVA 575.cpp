#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i,l,a[1000],sum;
    while(cin>>s)
    {
        l=strlen(s);
        sum=0;
        if(s[0]=='0'&&l==1)
        {
            break;
        }
        else
        {
            for(i=0;i<l;i++)
            {
                a[i]=s[i]-'0';
                sum=(a[i]*(pow(2,l-i)-1))+sum;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
