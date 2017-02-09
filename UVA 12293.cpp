#include<bits/stdc++.h>
using namespace std;
#define inf (int)10e9
int main()
{
    map<int,bool>mp;
    long long p=3;
    mp[3]=true;
    while(p<=inf)
    {
        p*=2;
        p+=1;
        mp[p]=true;
    }
    while(scanf("%d",&p)==1)
    {
        if(p==0)
            break;
        if(mp[p]==true)
            printf("Bob\n");
        else
            printf("Alice\n");
    }
    return 0;
}
