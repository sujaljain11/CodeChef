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
#define rep2(i,n) for(ll i=2;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i:f)

const ll sz=1e6+2;
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
vi fac(sz,1);
void factorial()
{
    rep2(i,sz)
    {
        fac[i]=i*fac[i-1];
        fac[i]%=mod;
    }
}


int32_t main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        factorial();
        ll x,sum=0;
        cin>>x;
        vi v(x);
        rep(i,x) cin>>v[i];
        rep(i,x)
        {
            sum+=fac[v[i]];
            sum%=mod;
        }
        cout<<sum%mod<<endl;
    }
    return 0;
}