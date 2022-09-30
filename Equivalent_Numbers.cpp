#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)

using namespace std;

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mpii;
typedef set<long long int> seti;
typedef multiset<long long int> mseti;


int hello(ll aa, ll bb)
{
    if(floor(log2(aa) / log2(bb))!=ceil((log2(aa) / log2(bb)))) return -1;
    else return 1;
}


void solution()
{
    ll a,b;
    cin>>a>>b;
    
    ll y=min(a,b);
    ll x=max(a,b);
    if((floor(a/b))!=(ceil(a/b))) 
    {
        cout<<"NO"<<endl;
        return;
    }
    ll ans=x/y;
    if(hello(x,ans)!=-1 && hello(y,ans)!=-1)
    {
        cout<<"YES"<<endl;
        return;
    }
    else cout<<"NO"<<endl;
}


int32_t main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}