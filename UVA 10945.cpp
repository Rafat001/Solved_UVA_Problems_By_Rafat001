#include<stdio.h>
#include<string.h>
int main()
{
    char c[10005],s[10005],s1[10005],temp;
    int i,l,k,flag;
    while(gets(c))
    {
        if(strcmp(c,"DONE")==0)
            break;
        k=0;
        flag=0;
        l=strlen(c);
        if(strcmp(c,"\0")==0)
            flag=1;
        for(i=0;i<l;i++)
        {
            if(!(c[i]>=97&&c[i]<=122))
            {
                c[i]+=32;
            }
            if(c[i]>=97 && c[i]<=122)
            {
                s[k]=c[i];
                k++;
            }
        }
        s[k]='\0';
        strcpy(s1,s);
        for(i=0;i<k;i++)
        {
            temp=s[i];
            s[i]=s[k-1];
            s[k-1]=temp;
            k--;
        }
        if(strcmp(s,s1)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
