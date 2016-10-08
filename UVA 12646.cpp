#include<stdio.h>
int main()
{
    int A,B,C;
    while(scanf("%d%d%d",&A,&B,&C)!=EOF)
        {
    if (A==1 || A==0 || B==1 || B==0 || C==1 || C==0)
        {
            if(A==B && B==C && A==C)
        printf("*\n");
            else if(A==B)
        printf("C\n");
            else if(A==C)
        printf("B\n");
            else if(B==C)
        printf("A\n");
        }
        }
    return 0;
}
