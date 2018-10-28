// Algo: BPM (Kuhn's Algo) //

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mem(n) memset(n,0,sizeof(n))
#define LCM(a,b) (a / __gcd(a,b) ) * b
#define gcd(a,b) __gcd(a,b)
#define for0(l,n) for(int l=0;l<n;l++)
#define for1(l,n) for(int l=1;l<=n;l++)
#define bug(n) cout<<">> "<<n<<" <<";
#define pb push_back
#define squerit(n) (ll)n*n
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0)
#define MAX 550

vector<int>v[MAX];
ll n,m,q,a,b,c,sum=0,cnt=0;
//ll arr[1000055];
map<ll,bool>mp;
struct data
{
    string ff,ss;
} arr[550];
string s;
int match[MAX];
bool  col[MAX];
bool  dfs(int nd)
{
    int sz = v[nd].size();
    for0(i,sz)
    {
        int u = v[nd][i];
        if(!col[u])
        {
            col[u]=1;
            if(match[u]==-1 || dfs(match[u]))
            {
                match[u]=nd;
                return true;
            }
        }
    }
    return false;
}
int BPM()
{
    memset(match,-1,sizeof(match));
    int cnt = 0;

    for0(i,n)
    {
        mem(col);
        //  col[i]=1;
        if(dfs(i))
            cnt++;
    }
    return cnt;
}
int main()
{
    //freopen("output.txt","w",stdout);
    FastRead;
    int t,cs=1,m,p;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        cin>>n>>m>>p;
        int k=0;
        vector<int>cat,dog;
        n=p;
        mem(col);
        for(int i=0; i<p; i++)
        {
            cin>>arr[i].ff>>arr[i].ss;
            if(arr[i].ff[0]=='C')
                cat.push_back(i);
            else
                dog.push_back(i);
        }
        for(int i=0;i<cat.size();i++)
        {
            for(int j=0;j<dog.size();j++)
            {
                int cid=cat[i],did=dog[j];
                if(arr[cid].ss==arr[did].ff || arr[cid].ff==arr[did].ss)
                {
                    v[i].push_back(j);
                }
            }
        }
        //cout<<BPM()<<endl;
        cout<<p-BPM()<<endl;

        for0(i,n)
        {
            v[i].clear();
        }
    }


}
