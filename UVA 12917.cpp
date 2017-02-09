#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,h,o;
    while(cin>>p>>h>>o)
    {
        if(o-h>=p)
            cout<<"Props win!"<<endl;
        else
            cout<<"Hunters win!"<<endl;
    }
    return 0;
}
