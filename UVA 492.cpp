#include<iostream>
#include<string>
using namespace std;
int main()
{
    int l,i,word,flag;
    string s,s1;
    char c;
    while(getline(cin,s))
    {
        word=0;
        l=s.size();
        for(i=0;i<l;i++)
        {
            if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A'))
            {
                if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
                {
                    c=s[i];
                    i++;
                    while(((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')))
                          {
                              s1+=s[i];
                              i++;
                          }
                          i--;
                          s1+=c;
                          s1+="ay";
                }
                else
                {
                    while(((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')))
                          {
                              s1+=s[i];
                              i++;
                          }
                          i--;
                          s1+="ay";
                }
            }
            else
                {
                    s1+=s[i];
                }
        }
        cout<<s1<<endl;
        s1.clear();
    }
    return 0;
}
