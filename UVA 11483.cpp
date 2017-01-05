#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,l,cs=1;
    string d="\\\\",e="\\\"",start="printf(\"",en="\\n\");";
    string s1, s;
    while(cin>>n)
    {
        string arr[150];
        if(n==0)
        {
            break;
        }
        while(getchar()!='\n');
        arr[0]="#include<string.h>";
        arr[1]="#include<stdio.h>";
        arr[2]="int main()";
        arr[3]="{";
        k=4;
        for(i=0; i<n; i++)
        {
            s1.clear();
            s.clear();
            getline(cin,s);
            l=s.size();
            for(j=0; j<l; j++)
            {
                if(s[j]=='"')
                    s1+=e;
                else if(s[j]=='\\')
                    s1+=d;
                else
                    s1+=s[j];
            }
            s1=start+s1+en;
            arr[k]=s1;
            k++;
        }
        arr[k]="printf(\"\\n\");";
        k++;
        arr[k]="return 0;";
        k++;
        arr[k]="}";
        printf("Case %d:\n",cs);
        cs++;
        for(i=0;i<=k;i++)
            cout<<arr[i]<<endl;
    }
    return 0;
}
