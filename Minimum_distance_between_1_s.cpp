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

void solution()
{
    ll n,a=0,b=0,ans=INT_MAX;
    cin>>n;
    string s;
    cin>>s;
    ll x=count(s.begin(),s.end(),'1');
    vi v(x);
    ll p=0;
    rep(i,s.length()) 
    {
        if(s[i]=='1') 
        {
            v[p]=i+1;
            p++;
        }
    }
    rep1(i,x)
    {
        ll dif=v[i]-v[i-1]-1;
        if(dif%2==0)
        {
            cout<<1<<endl;
            return;
        }
    }
    cout<<2<<endl;
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