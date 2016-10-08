
#include<stdio.h>
#include<string.h>
int main()
{
    char c[1005],i,len;
    while(gets(c))
    {
        len=strlen(c);
        for(i=0; i<len; i++)
        {
            if(c[i]=='4')
                printf("q");
            else if(c[i]=='5')
                printf("j");
            else if(c[i]=='6')
                printf("l");
            else if(c[i]=='7')
                printf("m");
            else if(c[i]=='8')
                printf("f");
            else if(c[i]=='9')
                printf("p");
            else if(c[i]=='0')
                printf("/");
            else if(c[i]=='-')
                printf("[");
            else if(c[i]=='=')
                printf("]");
            else if(c[i]=='$')
                printf("Q");
            else if(c[i]=='%')
                printf("J");
            else if(c[i]=='^')
                printf("L");
            else if(c[i]=='&')
                printf("M");
            else if(c[i]=='*')
                printf("F");
            else if(c[i]=='(')
                printf("P");
            else if(c[i]==')')
                printf("?");
            else if(c[i]=='_')
                printf("{");
            else if(c[i]=='+')
                printf("}");
            else if(c[i]=='q')
                printf("4");
            else if(c[i]=='w')
                printf("5");
            else if(c[i]=='e')
                printf("6");
            else if(c[i]=='r')
                printf(".");
            else if(c[i]=='t')
                printf("o");
            else if(c[i]=='y')
                printf("r");
            else if(c[i]=='u')
                printf("s");
            else if(c[i]=='i')
                printf("u");
            else if(c[i]=='o')
                printf("y");
            else if(c[i]=='p')
                printf("b");
            else if(c[i]=='[')
                printf(";");
            else if(c[i]==']')
                printf("=");
            else if(c[i]=='Q')
                printf("$");
            else if(c[i]=='W')
                printf("%%");
            else if(c[i]=='E')
                printf("^");
            else if(c[i]=='R')
                printf(">");
            else if(c[i]=='T')
                printf("O");
            else if(c[i]=='Y')
                printf("R");
            else if(c[i]=='U')
                printf("S");
            else if(c[i]=='I')
                printf("U");
            else if(c[i]=='O')
                printf("Y");
            else if(c[i]=='P')
                printf("B");
            else if(c[i]=='{')
                printf(":");
            else if(c[i]=='}')
                printf("+");
            else if(c[i]=='a')
                printf("7");
            else if(c[i]=='s')
                printf("8");
            else if(c[i]=='d')
                printf("9");
            else if(c[i]=='f')
                printf("a");
            else if(c[i]=='g')
                printf("e");
            else if(c[i]=='h')
                printf("h");
            else if(c[i]=='j')
                printf("t");
            else if(c[i]=='k')
                printf("d");
            else if(c[i]=='l')
                printf("c");
            else if(c[i]==';')
                printf("k");
            else if(c[i]==39)
                printf("-");
            else if(c[i]=='A')
                printf("&");
            else if(c[i]=='S')
                printf("*");
            else if(c[i]=='D')
                printf("(");
            else if(c[i]=='F')
                printf("A");
            else if(c[i]=='G')
                printf("E");
            else if(c[i]=='H')
                printf("H");
            else if(c[i]=='J')
                printf("T");
            else if(c[i]=='K')
                printf("D");
            else if(c[i]=='L')
                printf("C");
            else if(c[i]==':')
                printf("K");
            else if(c[i]=='"')
                printf("_");
            else if(c[i]=='z')
                printf("0");
            else if(c[i]=='x')
                printf("z");
            else if(c[i]=='c')
                printf("x");
            else if(c[i]=='v')
                printf(",");
            else if(c[i]=='b')
                printf("i");
            else if(c[i]=='n')
                printf("n");
            else if(c[i]=='m')
                printf("w");
            else if(c[i]==',')
                printf("v");
            else if(c[i]=='.')
                printf("g");
            else if(c[i]=='/')
                printf("'");
            else if(c[i]=='Z')
                printf(")");
            else if(c[i]=='X')
                printf("Z");
            else if(c[i]=='C')
                printf("X");
            else if(c[i]=='V')
                printf("<");
            else if(c[i]=='B')
                printf("I");
            else if(c[i]=='N')
                printf("N");
            else if(c[i]=='M')
                printf("W");
            else if(c[i]=='<')
                printf("V");
            else if(c[i]=='>')
                printf("G");
            else if(c[i]=='?')
                printf("%c",34);
            else
                printf("%c",c[i]);
        }
        printf("\n");
    }
}
