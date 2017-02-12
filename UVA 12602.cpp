#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,b,c,q;
    int d,i,ans,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%c%c%c%c%d",&a,&b,&c,&q,&d);
        getchar();
        ans=(((a-65)*(26*26))+((b-65)*26)+(c-65));
        if(abs(ans-d)<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }
    return 0;
}
