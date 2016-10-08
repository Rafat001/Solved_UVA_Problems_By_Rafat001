#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,t,n,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        a=((((((n*567)/9)+7492)*235)/47)-498);
        a=a%100;
        a=abs(a/10);
        printf("%d\n",a);
    }
    return 0;
}
