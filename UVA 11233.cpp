#include<stdio.h>
#include<string.h>
int main()
{
    int l,n,i,j,m;
    char c[105][30],s[30];
    scanf("%d%d",&m,&n);
    getchar();
    for(i=0; i<m*2; i++)
    {
        scanf("%s",c[i]);
    }
    getchar();
    for(i=0; i<n; i++)
    {
        int flag=0,ies=0,y=0;
        memset(s,'\0',sizeof(s));
        gets(s);
        l=strlen(s);
        if(m!=0)
        {
            for(j=0; j<m*2; j+=2)
            {
                if(strcmp(s,c[j])==0)
                {
                    printf("%s\n",c[j+1]);
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            continue;
        if(s[l-1]=='y')
        {
            y=1;
            if(s[l-2]!='a'&&s[l-2]!='e'&&s[l-2]!='i'&&s[l-2]!='o'&&s[l-2]!='u')
            {
                s[l-1]='i';
                s[l]='e';
                s[l+1]='s';
                ies=1;
            }
        }
        else if((s[l-1]=='o')||(s[l-1]=='s')||(s[l-1]=='x')||(s[l-1]=='h' && s[l-2]=='c')||(s[l-1]=='h'&&s[l-2]=='s'))
        {
            s[l]='e';
            s[l+1]='s';
        }
        else
        {
            s[l]='s';
        }
        if(y==1&&ies==0)
        {
            s[l]='s';
        }
        puts(s);
    }
    return 0;
}
