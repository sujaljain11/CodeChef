#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i:f)

const ll sz=1e6+1;
const ll mod=1e9+7;

using namespace std;

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mp;
typedef unordered_map<long long int,long long int> ump;
typedef set<long long int> seti;
typedef multiset<long long int> mset;

void solution()
{
    ll n,k,ans=0;
    cin>>n>>k;
    vi a(n),b(n);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    map<ll,vi> m;
    rep(i,n) m[a[i]].pb(b[i]);
    rep(i,n) sort(m[a[i]].begin(),m[a[i]].end());
    if(k>m.size()) 
    {
        cout<<-1<<endl;
        return;
    }
    vi c;
    it(i,m)
    {
        c.pb(i.second[0]);
    }
    sort(c.begin(),c.end());
    rep(i,k) ans+=c[i];
    cout<<ans<<endl;
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