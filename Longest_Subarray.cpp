#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define all(v) v.begin(),v.end()
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

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mp;
typedef unordered_map<long long int,long long int> ump;
typedef set<long long int> seti;
typedef multiset<long long int> mset;
typedef multiset<pii> mpi;

ll findorvalue(ll i,ll j,vvi &prefixbit)
{
    if(i>j) return 0;
    ll value=0;
    rep(k,30)
    {
        ll v=prefixbit[j][k];
        if(i) v-=prefixbit[i-1][k];
        if(v!=0) value+=(1<<k);
    }
    return value;
}
void solution()
{
    ll n,x=0;
    cin>>n;
    vi a(n);
    rep(i,n)
    {
        cin>>a[i];
        x=x|a[i];
    }
    vvi prefixbit(n,vi(30,0));
    rep(i,n) rep(j,30) if((1<<j)&a[i]) prefixbit[i][j]=1;
    rep1(i,n) rep(j,30) prefixbit[i][j]+=prefixbit[i-1][j];
    ll ans=0;
    rep(i,n) 
    {
        ll s=i,e=n-1;
        while(s<=e)
        {
            ll mid=(s+e)/2;
            ll mr=findorvalue(i,mid,prefixbit);
            ll lr=findorvalue(0,i-1,prefixbit);
            ll rr=findorvalue(mid+1,n-1,prefixbit);
            if(mr!=x) 
            {
                s=mid+1;
                continue;
            }
            if(mr==(lr|rr)) 
            {
                ans=max(ans,mid-i+1);
                s=mid+1;
            }
            else e=mid-1;
        }
    }
    if(ans==0) cout<<-1<<endl;
    else cout<<ans<<endl;
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