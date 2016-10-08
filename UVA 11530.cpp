#include<stdio.h>
#include<string.h>
int main()
{
    char c[105];
    int t,i,l,sum,j;
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {
        sum=0;
        gets(c);
        l=strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i]=='a' ||c[i]=='d' ||c[i]=='g' ||c[i]=='j' ||c[i]=='m' ||c[i]=='p' ||c[i]=='t' ||c[i]=='w' ||c[i]==' ')
                sum++;
            else if(c[i]=='b' ||c[i]=='e' ||c[i]=='h' ||c[i]=='k' ||c[i]=='n' ||c[i]=='q' ||c[i]=='u' ||c[i]=='x')
                sum+=2;
            else if(c[i]=='c' ||c[i]=='f' ||c[i]=='i' ||c[i]=='l' ||c[i]=='o' ||c[i]=='r' ||c[i]=='v' ||c[i]=='y')
                sum+=3;
            else if(c[i]=='s'||c[i]=='z')
                sum+=4;
        }
        printf("Case #%d: %d\n",j,sum);
    }
    return 0;
}
