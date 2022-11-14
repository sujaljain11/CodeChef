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
    
}


int32_t main()
{
    fast
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    vi v(n);
    rep(i,n) cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    ll x=v[0],y=v[1];
    if(m<=k) 
    {
        cout<<m*x<<endl;
        return 0;
    }
    while(m>k)
    {
        ans+=k*x;
        ans+=y;
        m-=k+1;
    }
    ans+=m*x;
    cout<<ans<<endl;
    return 0;
}