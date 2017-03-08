#include<bits/stdc++.h>
using namespace std;

string s[101];
map <string, int> mp;
vector <string> v;

int main()
{
    int T, n, m, c, i, j, k;
    char ch;
    scanf("%d", &T);
    while(T--)
    {
        mp.clear();
        v.clear();
        scanf("%d %d", &n, &m);
        for(i=0; i<m; i++)
        {
            cin >> s[i];
        }
        for(i=0; i<m; i++)
        {
            c=0;
            for(j=0; j<n; j++)
            {
                ch = s[i][j];
                for(k=j+1; k<n; k++)
                {
                    if(s[i][k] < ch)
                    {
                        c++;
                    }
                }
            }
            mp[s[i]] = c;
            v.push_back(s[i]);
        }
        for(i=0; i<v.size()-1; i++)
        {
            for(j=0; j<v.size()-i-1; j++)
            {
                if(mp[v[j]] > mp[v[j+1]])
                {
                    swap(v[j], v[j+1]);
                }
            }
        }
        for(i=0; i<v.size() ; i++)
        {
            cout << v[i] << endl;
        }
        if(T != 0)
        {
            printf("\n");
        }
    }
    return 0;
}
