
#include<stdio.h>
#include<string.h>
int main()
{
    char c[2005],c1[2005];
    int t,i,l,numbers[2005],j,k;
    numbers[0]=numbers[1]=0;
    numbers[2]=numbers[3]=1;
    for(i=4;i<2005;i+=2)
    {
        numbers[i]=0;
        numbers[i+1]=1;
    }
    for(i=3;i<=45;i+=2)
    {
        if(numbers[i]==1)
        {
            for(j=i*i;j<2005;j+=i)
            {
                numbers[j]=0;
            }
        }
    }
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int count=0,flag=0,frequence[2005]={0};
        scanf("%s",c);
        l=strlen(c);
        printf("Case %d: ",i+1);
        for(j=0;j<l;j++)
        {
            frequence[c[j]]++;
        }
        for(j=0;j<=122;j++)
        {
            if(numbers[frequence[j]]==1)
            {
                printf("%c",j);
                flag=1;
            }
        }
        if(flag==0)
            printf("empty");
        printf("\n");
    }
}
