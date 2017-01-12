#include <bits/stdc++.h>
using namespace std;
string solve(string num1, string num2)
{

    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
        return "0";
    vector<int> result(n1 + n2, 0);

    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = n1 - 1; i >= 0; i--)
    {
        int carrier = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j = n2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1 * n2 + result[i_n1 + i_n2] + carrier;
            carrier = sum / 10;
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }
        if (carrier > 0)
            result[i_n1 + i_n2] += carrier;

        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    {
        i--;
    }
    if(i == -1)
        return "0";
    string s;
    while (i >= 0)
    {
        s +=((result[i])+'0');
        i--;
    }
    return s;
}
int main()
{
    string s1,s2,S,ans,temp,ss;
    vector<string>vv[16];
    char c;
    int n,a,i,j,k,l1,l2,maxx=0,p,flag=0,sum,si,len,loc;
    vv[0].push_back("0");
    for(i=1; i<=150; i++)
    {
        for(j=1; j<=15; j++)
        {
            ss.clear();
            if(j<=9)
            {
                s1=j+'0';
            }
            else
            {
                if(j==10)
                    s1="10";
                if(j==11)
                    s1="11";
                if(j==12)
                    s1="12";
                if(j==13)
                    s1="13";
                if(j==14)
                    s1="14";
                if(j==15)
                    s1="15";
            }
            S=s1;
            for(k=2; k<=i; k++)
            {
                S=solve(s1,S);
            }
            p=i;
            ss=(p%10)+'0';
            p/=10;
            while(p>0)
            {
                c=((p%10)+'0');
                ss=c+ss;
                p/=10;
            }
            S=solve(S,ss);
            if(S.size()>maxx)
                maxx=S.size();
            vv[j].push_back(S);
        }
    }
    for(i=1;i<=15;i++)
    {
        for(j=0;j<=149;j++)
        {
            if(vv[i][j].size()<maxx)
            {
                len=maxx-vv[i][j].size();
                c='0';
                for(k=1;k<=len;k++)
                {
                    vv[i][j]=c+vv[i][j];
                }
            }
        }
    }
    while(cin>>n>>a)
    {
        flag=0;
        if(n==0 || a==0)
        {
            cout<<0<<endl;
            continue;
        }
        sum=0;
        ans.clear();
        loc=maxx-1;
        for(i=loc;i>=0;i--)
        {
            for(j=0;j<n;j++)
            {
                sum+=vv[a][j][i]-'0';
            }
            c=(sum%10)+'0';
            ans=c+ans;
            sum/=10;
        }
        if(ans.size()==0)
            cout<<0<<endl;
        else
        {
            if(sum!=0)
                cout<<sum;
            len=ans.size();
            for(i=0;i<len;i++)
            {
                if(ans[i]!='0')
                flag=1;
                if(flag==1)
                    cout<<ans[i];

            }
            cout<<endl;
        }
    }
    return 0;
}
