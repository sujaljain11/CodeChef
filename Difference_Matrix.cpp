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

#define sp <<" "<<
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

const char* copyString(std::string s)
{
    const char* s2;
    s2 = s.c_str();
    return s2;
}

void solution()
{
    ll n;
    cin>>n;
    ll a=1,b=n*n;
    vvi v;
    rep(i,n) 
    {
        vi p;
        rep(j,n) 
        {
            if(j%2)
            {
                p.pb(b);
                b--;
            }
            else 
            {
                p.pb(a);
                a++;
            }
        }
        v.pb(p);
    }
    swap(v[0][0],v[n-1][n-1]);
    it(i,v)
    {
        it(j,i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
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