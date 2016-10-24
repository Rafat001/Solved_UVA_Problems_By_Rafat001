#include<bits/stdc++.h>
using namespace std;
map<string,int>check;
int main()
{
    int t,n,i,salary,sum;
    char c[20];
    scanf("%d%d",&t,&n);
    while(getchar()!='\n');
    for(i=0;i<t;i++)
    {
        scanf("%s%d",c,&salary);
        check[c]=salary;
    }
    while(getchar()!='\n');
    for(i=0;i<n;i++)
    {
        sum=0;
        while(scanf("%s",c))
        {
            if(strcmp(c,".")==0)
                break;
            sum=sum+check[c];
        }
        printf("%d\n",sum);
    }
    return 0;
}
