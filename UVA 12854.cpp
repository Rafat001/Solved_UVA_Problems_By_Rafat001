#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j)
    {
        if(a==f || b==g || c==h || d==i || e==j)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }
    return 0;
}
