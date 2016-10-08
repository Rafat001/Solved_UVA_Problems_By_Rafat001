#include<stdio.h>
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        if (N>=1 && N<=100)
        {
            printf("%d\n",(N*(N + 1)/2)*(2*N+1)/3);
        }
        else
        {
            printf("Type a Input Between 1 to 100");
        }
    }
    N=0;
    return 0;
}
