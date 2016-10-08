#include<stdio.h>
#include<string.h>
int main()
{
    int numbers[2000]= {0},i,j,l,sum;
    numbers[0]=1;
    for(i=4; i<2000; i+=2)
    {
        numbers[i]=1;
    }
    for(i=3; i<45; i+=2)
    {
        if(numbers[i]==0)
        {
            for(j=i*i; j<2000; j+=i)
            {
                numbers[j]=1;
            }
        }
    }
    char c[25];
    while(gets(c))
    {
        sum=0;
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]>='a'&&c[i]<='z')
            {
                sum=sum+(c[i]-96);
            }
            if(c[i]>='A'&&c[i]<='Z')
            {
                sum=sum+(c[i]-38);
            }
        }
        if(numbers[sum]==0)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
