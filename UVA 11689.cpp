#include <stdio.h>
int a[20],b[20],c[20];
int day;
int p = 0, n = 0, i, q=0;
int soda(int a,int b,int c)
{
    q = 0;
    n = a+b;

    while(n>=c)
    {
        q += (n/c);
        n = (n/c)+(n%c);
    }
    return q;
}
int main()
{

    scanf("%d",&day);

    for(i =0 ; i < day; i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);

    }
    for(i =0 ; i < day; i++)
    {
        printf("%d\n",soda(a[i],b[i],c[i]));
    }

}
