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
    ll n,im=0,is=0;
    cin>>n;
    vi v(n);
    cin>>v[0];
    ll mx=v[0];
    ll mn=v[0];
    rep1(i,n)
    {
        ll x;
        cin>>x;
        if(x>mx) 
        {
            mx=max(mx,x);
            im=i;
        }
        if(x<=mn)
        {
            mn=min(mn,x);
            is=i;
        }
        v.pb(x);
    }
    ll ans=im+(n-1-is);
    if(im<is) cout<<ans<<endl;
    else cout<<ans-1<<endl;
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