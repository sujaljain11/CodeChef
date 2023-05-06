#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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

#define vlli(v,n) vector<ll> v(n); rep(i,n) cin>>v[i];

const ll sz=1e6+1;
const ll mod=1e9+7;

using namespace std;

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<ll,ll> mp;
typedef unordered_map<ll,ll> ump;
typedef set<ll> seti;
typedef multiset<ll> mset;
typedef multiset<pii> mpi;

//Functions

void solution()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll ans=0;
    ll l=0,r=0,u=0,d=0;
    rep(i,n)
    {
        ll x,y;
        cin>>x>>y;
        v.pb(make_pair(x,y));
    }
    rep(i,n) 
    {
        ll x=v[i].first,y=v[i].second;
        ll l=0,r=0,u=0,d=0;
        rep(j,n)
        {
            if(v[j].first==x) 
            {
                if(v[j].second>y) u++;
                if(v[j].second<y) d++;
            }
            if(v[j].second==y) 
            {
                if(v[j].first>x) r++;
                if(v[j].first<x) l++;
            }
        }
        // cout<<l<<" "<<r<<" "<<u<<" "<<d<<endl;
        if(d>0 && u>0 && l>0 && r>0) ans++;
    }
    cout<<ans<<endl;
}


int32_t main()
{
    fast
    int t;
    t=1;
    while(t--)
    {
        solution();
    }
    return 0;
}