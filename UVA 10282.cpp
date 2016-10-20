#include<bits/stdc++.h>
using namespace std;
map<string,string>check;
static struct detail
{
    char to[15];
    char from[15];
}c[100000];
int main()
{
    char d[15],abc[15];
    int k=0,flag,i,start,j;
    while(gets(abc))
    {
        start=0;
        if(strlen(abc)==0)
            break;
        int l=strlen(abc);
        for(i=0;i<l;i++)
        {
            if(abc[i]==' ')
            {
                start=i+1;
                break;
            }
            c[k].to[i]=abc[i];
        }
        for(i=start,j=0;i<l;i++,j++)
        {
            c[k].from[j]=abc[i];
        }
        check[c[k].from]=c[k].to;
        k++;
    }
    while(gets(d))
    {
        flag=0;
        if(check[d]!="\0")
            cout<<check[d]<<endl;
        else
            cout<<"eh"<<endl;
    }
    return 0;
}

