#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,cs=1;
    bool flag;
    cin>>t;
    char ar[5][5];
    while(t--)
    {
        flag=false;
        for(i=0; i<5; i++)
        {
            bool line=false;
            for(j=0; j<5; j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]=='|')
                    line=true;
                if(ar[i][j]=='>' && line==true)
                    flag=true;
                else if(ar[i][j]=='<' && line==false)
                    flag=true;
            }
        }
        while(getchar()!='\n');
        printf("Case %d: ",cs);
        cs++;
        if(flag==true)
            cout<<"No Ball"<<endl;
        else
            cout<<"Thik Ball"<<endl;
    }
    return 0;
}

