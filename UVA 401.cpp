#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0,i,length,j,temp;
    char c[100],b[100];
    while(scanf("%s",b)!=EOF)
    {
        flag=0;
        length=strlen(b);
        strcpy(c,b);
        reverse(b,b+length);
        if(strcmp(c,b)==0)
        {
            for(i=0; i<strlen(b); i++)
            {
                if(c[i]=='A'||c[i]=='U'||c[i]=='H'||c[i]=='I'||c[i]=='M'||c[i]=='O'||c[i]=='W'||c[i]=='T'||c[i]=='V'||c[i]=='X'||c[i]=='Y'||c[i]=='8')
                {
                    flag++;
                }
            }
            if(flag<strlen(b))
                printf("%s -- is a regular palindrome.\n\n",b);
            else if(flag==strlen(b))
                printf("%s -- is a mirrored palindrome.\n\n",b);
        }
        else if((strcmp(c,b))!=0)
        {
            for(i=0; i<length; i++)
            {
                if(b[i]=='2')
                    b[i]='S';
                else if(b[i]=='3')
                    b[i]='E';
                else if(b[i]=='5')
                    b[i]='Z';
                else if(b[i]=='J')
                    b[i]='L';
                else if(b[i]=='L')
                    b[i]='J';
                else if(b[i]=='S')
                    b[i]='2';
                else if(b[i]=='E')
                    b[i]='3';
                else if(b[i]=='Z')
                    b[i]='5';
            }
            if((strcmp(c,b))==0)
            {
                printf("%s -- is a mirrored string.\n\n",c);
            }
            else
            {
                printf("%s -- is not a palindrome.\n\n",c);
            }
        }
    }
    return 0;
}
