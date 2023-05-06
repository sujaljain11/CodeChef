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
    ll n,k=0;
    cin>>n;
    vi v(n);
    pii p[100000];
    mp m;
    rep(i,n) 
    {
        cin>>v[i];
        p[v[i]].first=0;
        p[v[i]].second=0;
        m[v[i]]++;
    }
    rep(i,n) if(m[v[i]]%v[i]!=0) {cout<<-1<<endl;return;}
    rep(i,n) 
    {
        if(p[v[i]].first==0 || p[v[i]].second==v[i])
        {
            k++;
            p[v[i]].first=k;
            p[v[i]].second=1;   
        }
        else p[v[i]].second++;
        cout<<p[v[i]].first;
        if(i<n-1) cout<<" ";
        else cout<<endl;
    }
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